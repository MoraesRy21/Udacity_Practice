#pragma once
#include<iostream>

template <typename T> 
T sumTwo(T a, T b);

template <typename T, typename U>
T getBigger(T input1, U input2);

//The class accepts strings, 
//so we need to use namespace
using namespace std;

//tell compiler this class uses a generic value
template <class T>
class StudentRecord {
private:
    const int size = 5;
    T grade;
    int studentId;
public:
    StudentRecord(T input);
    void setId(int idIn);
    void printGrades();
};