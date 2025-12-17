#include "Laptop.h"
#include <iostream>
using namespace std;
#include <cstring>

int Laptop::count = 0;

Laptop::Laptop(CPU cpu_, SSD ssd_, RAM ram_, videocard videocard_
    , const char* name_, double price_): cpu(cpu_), ssd(ssd_),VIDEOCARD(videocard_),
        name(nullptr),color(nullptr),price(price_), ram(ram_)
{
    size_t nameLen = strlen(name_) + 1;
    name = new char[nameLen];
    strcpy_s(name, nameLen, name_);
    
    const char* defColor = "Black";
    size_t colorLen = strlen(defColor) + 1;
    color = new char[colorLen];
    strcpy_s(color, colorLen, defColor);
    count++;
}

Laptop::~Laptop()
{
    delete[] name;
    delete[] color;
    cout << "Destructor laptop" << endl;
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
    cout << endl;
    cout << "------Laptop------" << endl;
    cout << "Laptop number " << count << endl;
    cout << "Name: " << name << "\n";
    cout << "Color: " << color << "\n";
    cout << "Price: " << price << "\n";
    cpu.printCPU();
    ssd.printSSD();
    VIDEOCARD.printVideocard();
    ram.printRAM();
    cout << endl;
}

Laptop::Laptop(const Laptop& other)
    : cpu(other.cpu), ssd(other.ssd), VIDEOCARD(other.VIDEOCARD), ram(other.ram), price(other.price)
{
    size_t newLength = strlen(other.name) + 1;
    name = new char[newLength];
    strcpy_s(name, newLength, other.name);

    size_t otherLength = strlen(other.color) + 1;
    color = new char[otherLength];
    strcpy_s(color, otherLength, other.color);

    count++;
}
