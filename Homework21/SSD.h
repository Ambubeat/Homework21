#pragma once
class SSD
{
	char* model;
	int storage;
public:
    SSD(char* model_, int cores_);
    ~SSD();

    const char* getModel() const;
    int getStorage() const;
    void setStorage(int cores_);
    void setModel(const char* model_);
    void printSSD();
};

