#include "videocard.h"
#include <iostream>
#include <cstring>
using namespace std;

videocard::videocard(const char* model_, int cores_)
    :
    cores(cores_)
{

    size_t newLength = strlen(model_) + 1;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Initialization" << endl;
}

videocard::~videocard() {
    delete[] model;
    cout << "Destruction videocard" << endl;
}

videocard::videocard()
{
    model = nullptr;
    cores = 0;
}

void videocard::setModel(const char* model_) {
    size_t newLength = strlen(model_) + 1;
    delete[] model;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Model set" << endl;
}

void videocard::printVideocard() const
{
    cout << "Videocard: model: " << model << ", cores: " << cores << endl;
}

void videocard::setCores(int cores_) {
    cores = cores_;
    cout << "Cores set" << endl;
}

const char* videocard::getModel() const {
    return model;
}

int videocard::getCores() const {
    return cores;
}

videocard::videocard(const videocard& other)
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
    cout << "Copy constructor for videocard" << endl;

}