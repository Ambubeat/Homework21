#include "SSD.h"
#include <iostream>
#include <cstring>
using namespace std;

SSD::SSD(char* model_, int storage_)
    : model(new char[strlen(model_) + 1]),
    storage(storage_)
{
    size_t newLength = strlen(model_) + 1;
    strcpy_s(model, newLength, model_);
    cout << "Initialization" << endl;
}

SSD::~SSD() {
    delete[] model;
    cout << "Destruction" << endl;
}

void SSD::setModel(const char* model_) {
    size_t newLength = strlen(model_) + 1;
    delete[] model;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Model set" << endl;
}

void SSD::printSSD()
{
    for (size_t i = 0; i < strlen(model); i++)
    {
        cout << model[i];
    }
    cout << endl << storage << endl;
}

void SSD::setStorage(int storage_) {
    storage = storage_;
    cout << "Storage set" << endl;
}

const char* SSD::getModel() const {
    return model;
}

int SSD::getStorage() const {
    return storage;
}