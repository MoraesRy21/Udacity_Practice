#pragma once
#include <string>

class Patient {
private:
    int idNumber;
public:
    void setIdNumber(int idIn);
    int getIdNumber();
};

class Dog {
private:
    std::string breed;
public:
    void setBreed(std::string breedIn);
    std::string getBreed();
};

class Pet : public Dog, public Patient {
private:
    std::string name;
public:
    void setName(std::string nameIn);
    std::string getName();
};