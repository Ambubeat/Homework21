#pragma once
#include <cstddef>
#include <iostream>
using namespace std;


class CPU {
private:
    char* model; 
    int cores;

public:
    CPU(char* model_, int cores_);
    ~CPU();

    const char* getModel() const;
    int getCores() const;
    void setCores(int cores_);
    void setModel(const char* model_);
    void printCPU();
};
