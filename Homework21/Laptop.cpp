#include "Laptop.h"
#include <iostream>
using namespace std;
#include <cstring>

Laptop::Laptop(const CPU& cpu_,
    const SSD& ssd_,
    const RAM& ram_,
    const videocard& videocard_,
    const char* name_,
    double price_)
    : cpu(cpu_),
    ssd(ssd_),
    VIDEOCARD(videocard_),
    name(nullptr),
    color(nullptr),
    price(price_)
{
    size_t nameLen = strlen(name_) + 1;
    name = new char[nameLen];
    strcpy_s(name, nameLen, name_);

    const char* defColor = "Black";
    size_t colorLen = strlen(defColor) + 1;
    color = new char[colorLen];
    strcpy_s(color, colorLen, defColor);
}

Laptop::~Laptop()
{
    delete[] name;
    delete[] color;
}

void Laptop::setName(const char* newName)
{
    size_t len = strlen(newName) + 1;

    delete[] name;
    name = new char[len];
    strcpy_s(name, len, newName);
}

void Laptop::setColor(const char* newColor)
{
    size_t len = strlen(newColor) + 1;

    delete[] color;
    color = new char[len];
    strcpy_s(color, len, newColor);
}

void Laptop::setPrice(double newPrice)
{
    price = newPrice;
}

void Laptop::print() const
{
    cout << "Name: " << name << "\n";
    cout << "Color: " << color << "\n";
    cout << "Price: " << price << "\n\n";

    std:cout << "CPU: ";
    cpu.printCPU();

    std::cout << "RAM: ";
    ram.printRAM();

    std::cout << "SSD: ";
    ssd.printSSD();

    std::cout << "Videocard: ";
    VIDEOCARD.printVideocard();
}