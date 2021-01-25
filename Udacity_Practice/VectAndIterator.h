#pragma once
#include <vector>
#include <iostream>

void printVector(std::vector<float>& vIn);

void printVectorInt(std::vector<int>& vIn);
void assignFunction(std::vector<int>& vInts, int in);
void pushBackFunction(std::vector<int>& vInts, int in);
void emplaceFunction(std::vector<int>& vInts, int loc, int in);