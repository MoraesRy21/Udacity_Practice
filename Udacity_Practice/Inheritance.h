#pragma once
#include <string>

class Flower {

private:
    std::string bloomTime;
public:
    Flower();
    void setBloomTime(std::string bloomIn);
    std::string getBloomTime();
};

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose : public Flower {
private:
    std::string fragrance;
public:
    Rose();
    void setFragrance(std::string fragIn);
    std::string getFragrance();
};