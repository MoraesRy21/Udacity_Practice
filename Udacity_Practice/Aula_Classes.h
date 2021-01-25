#pragma once
#include<iostream>
#include<string>

void func_aula_classes();

void func_aula_classes2();

class Student {
    std::string name;
    int id;
    int gradDate;

public:
    void setName(std::string nameIn) {
        name = nameIn;
    }

    void setId(int idIn) {
        id = idIn;
    }

    void setGradDate(int gradDateIn) {
        gradDate = gradDateIn;
    }

    void print() {
        std::cout << name << " " << id << " " << gradDate;
    }

    std::string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    int getGradDate() {
        return gradDate;
    }

};

class Cat {
    using String = std::string;

public:
    Cat() {
        std::cout << "Assigning inital values in the constructor\n";
        name = "Unknown";
        breed = "Unknown"; //the initial value of the breed
        age = 99; //the initial value of the age
    }

private:
    String name;
    String breed;
    int age;

public:

    void setName(String nameIn) {
        name = nameIn;
    }

    String getName() {
        return name;
    }

    void setBreed(String breedIn) {
        breed = breedIn;
    }

    String isBreed() {
        return breed;
    }

    void setAge(int ageIn) {
        age = ageIn;
    }

    int getAge() {
        return age;
    }

    void printInfo() {
        std::cout << name << " " << breed << " " << age << "\n";
    }
};