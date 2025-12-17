#pragma once

#include <iostream>
#include "CPU.h"
#include "SSD.h"
#include "videocard.h"
#include "RAM.h"

class Laptop
{
private:
    CPU cpu;
    SSD ssd;
    videocard VIDEOCARD;
    RAM ram;

    char* name;
    char* color;
    double price; 
    static int count;
public:

    Laptop(CPU cpu_,
        SSD ssd_,
        RAM ram_,
        videocard videocard_,
        const char* name_,
        double price_);


    ~Laptop();

    const char* getName() const { return name; }
    const char* getColor() const { return color; }
    double getPrice() const { return price; }

    void setName(const char* newName);
    void setColor(const char* newColor);
    void setPrice(double newPrice);

    void print() const;
    Laptop(const Laptop& other);
};
