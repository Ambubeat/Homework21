#include "CPU.h"
#include <iostream>
#include <cstring>
using namespace std;

CPU::CPU(char* model_, int cores_)
    : model(new char[strlen(model_) + 1]),
    cores(cores_)
{
    size_t newLength = strlen(model_) + 1;
    strcpy_s(model, newLength, model_);
    cout << "Initialization" << endl;
}

CPU::~CPU() {
    delete[] model;
    cout << "Destruction" << endl;
}

void CPU::setModel(const char* model_) {
    size_t newLength = strlen(model_) + 1;
    delete[] model;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Model set" << endl;
}

void CPU::printCPU()
{
    for (size_t i = 0; i < strlen(model); i++)
    {
        cout << model[i];
    }
    cout << endl << cores << endl;
}

void CPU::setCores(int cores_) {
    cores = cores_;
    cout << "Cores set" << endl;
}

const char* CPU::getModel() const {
    return model;
}

int CPU::getCores() const {
    return cores;
}