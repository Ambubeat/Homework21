#include "videocard.h"
#include <iostream>
#include <cstring>
using namespace std;

videocard::videocard(char* model_, int cores_)
    : model(new char[strlen(model_) + 1]),
    cores(cores_)
{
    size_t newLength = strlen(model_) + 1;
    strcpy_s(model, newLength, model_);
    cout << "Initialization" << endl;
}

videocard::~videocard() {
    delete[] model;
    cout << "Destruction" << endl;
}

void videocard::setModel(const char* model_) {
    size_t newLength = strlen(model_) + 1;
    delete[] model;
    model = new char[newLength];
    strcpy_s(model, newLength, model_);
    cout << "Model set" << endl;
}

void videocard::printVideocard()
{
    for (size_t i = 0; i < strlen(model); i++)
    {
        cout << model[i];
    }
    cout << endl << cores << endl;
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