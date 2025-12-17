#include "RAM.h"
#include <iostream>
#include <cstring>
using namespace std;


RAM::RAM(const char* model_, int storage_)
    :
    storage(storage_)
{

    size_t newLength = strlen(model_) + 1;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Initialization" << endl;
}


RAM::~RAM() {
    delete[] model;
    cout << "Destruction ram" << endl;
}

RAM::RAM()
{
    model = nullptr;
    storage = 0;
}

void RAM::setModel(const char* model_) {
    size_t newLength = strlen(model_) + 1;
    delete[] model;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Model set" << endl;
}

void RAM::printRAM() const
{
    cout << "RAM: model: " << model << ", storage capacity: " << storage << endl;
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

RAM::RAM(const RAM& other)
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
    cout << "Copy constructor for RAM" << endl;

}