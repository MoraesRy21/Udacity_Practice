#include "Temp.h"

template <typename T> T 
sumTwo(T a, T b) {
    return a + b;
}

template <typename T, typename U>
T getBigger(T input1, U input2) {
    if (input1 > input2)
        return input1;
    return input2;
}

template<class T>
StudentRecord<T>::StudentRecord(T input) {
    grade = input;
}

template<class T>
void StudentRecord<T>::setId(int idIn) {
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades() {
    std::cout << "ID# " << studentId << ": ";
    std::cout << grade << "\n ";
    std::cout << "\n";
}