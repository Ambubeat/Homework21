#include "CPU.h"
#include <iostream>
#include <cstring>
using namespace std;

CPU::CPU(const char* model_, int cores_)
    : 
    cores(cores_)
{
    
    size_t newLength = strlen(model_) + 1;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Initialization" << endl;
}

CPU::CPU() {
    model = nullptr;
    cores = 0;
}

CPU::~CPU() {
    delete[] model;
    cout << "Destruction CPU" << endl;
}

void CPU::setModel(const char* model_) {
    size_t newLength = strlen(model_) + 1;
    delete[] model;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Model set" << endl;
}

void CPU::printCPU() const
{
    cout << "CPU: model: " << model << ", cores: " << cores << endl;
}

CPU::CPU(const CPU& other)
{
    this->cores = other.cores;

    if (other.model != nullptr) {
        size_t newLength = strlen(other.model) + 1;
        model = new char[newLength];
        strcpy_s(model, newLength, other.model);
    }
    else {
        model = nullptr;
    }
    cout << "Copy constructor for CPU" << endl;

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