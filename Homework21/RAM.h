#pragma once
class RAM
{
    char* model;
    int storage;
public:
    RAM(const char* model_, int cores_);
    ~RAM();
    RAM();
    const char* getModel() const;
    int getStorage() const;
    void setStorage(int cores_);
    void setModel(const char* model_);
    void printRAM() const;
    RAM(const RAM& other);
};

