#include "SSD.h"
#include <iostream>
#include <cstring>
using namespace std;

SSD::SSD(const char* model_, int storage_)
    :
    storage(storage_)
{

    size_t newLength = strlen(model_) + 1;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Initialization" << endl;
}

SSD::~SSD() {
    delete[] model;
    cout << "Destruction ssd" << endl;
}

SSD::SSD()
{
    model = nullptr;
    storage = 0;
}

void SSD::setModel(const char* model_) {
    size_t newLength = strlen(model_) + 1;
    delete[] model;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Model set" << endl;
}

void SSD::printSSD() const
{
    cout << "SSD: model: " << model << ", storage: " << storage << endl;
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

SSD::SSD(const SSD& other)
{
    this->storage = other.storage;

    if (other.model != nullptr) {
        size_t newLength = strlen(other.model) + 1;
        model = new char[newLength];
        strcpy_s(model, newLength, other.model);
    }
    else {
        model = nullptr;
    }
    cout << "Copy constructor for SSD" << endl;

}