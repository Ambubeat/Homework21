#pragma once
#include <cstddef>
#include <iostream>
using namespace std;


class videocard {
private:
    char* model;
    int cores;

public:
    videocard(char* model_, int cores_);
    ~videocard();

    const char* getModel() const;
    int getCores() const;
    void setCores(int cores_);
    void setModel(const char* model_);
    void printVideocard();
};

