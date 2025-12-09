#include "RAM.h"
#include <iostream>
#include <cstring>
using namespace std;


RAM::RAM(char* model_, int storage_)
    : model(new char[strlen(model_) + 1]),
    storage(storage_)
{
    size_t newLength = strlen(model_) + 1;
    strcpy_s(model, newLength, model_);
    cout << "Initialization" << endl;
}

RAM::~RAM() {
    delete[] model;
    cout << "Destruction" << endl;
}

void RAM::setModel(const char* model_) {
    size_t newLength = strlen(model_) + 1;
    delete[] model;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Model set" << endl;
}

void RAM::printRAM()
{
    for (size_t i = 0; i < strlen(model); i++)
    {
        cout << model[i];
    }
    cout << endl << storage << endl;
}

void RAM::setStorage(int storage_) {
    storage = storage_;
    cout << "Storage set" << endl;
}

const char* RAM::getModel() const {
    return model;
}

int RAM::getStorage() const {
    return storage;
}