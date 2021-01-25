#include "Inheritance.h"

Flower::Flower() {
    bloomTime = "bloom";
}

void Flower::setBloomTime(std::string bloomIn) {
    bloomTime = bloomIn;
}

std::string Flower::getBloomTime() {
    return bloomTime;
}

Rose::Rose() {
    fragrance = "NA";
}

void Rose::setFragrance(std::string fragIn) {
    fragrance = fragIn;
}

std::string Rose::getFragrance() {
    return fragrance;
}