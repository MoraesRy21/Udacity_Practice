#include "MultipleInheritance.h"

void Patient::setIdNumber(int idIn) {
    idNumber = idIn;
}

int Patient::getIdNumber() {
    return idNumber;
}

void Dog::setBreed(std::string breedIn) {
    breed = breedIn;
}

std::string Dog::getBreed() {
    return breed;
}

void Pet::setName(std::string nameIn) {
    name = nameIn;
}

std::string Pet::getName() {
    return name;
}