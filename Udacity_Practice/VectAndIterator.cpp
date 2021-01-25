#include "VectAndIterator.h"

void printVector(std::vector<float>& vIn) {
	if (vIn.empty()) {
		std::cout << "Empty vector!";
		return;
	}

	std::vector<float>::iterator it;
	for (it = vIn.begin(); it != vIn.end(); it++) {
		std::cout << *it << "\t";
	}
}

void printVectorInt(std::vector<int>& vIn) {
	if (vIn.empty()) {
		std::cout << "Empty vector!";
		return;
	}

	std::vector<int>::iterator it;
	for (it = vIn.begin(); it != vIn.end(); it++) {
		std::cout << *it << ", ";
	}
}

void assignFunction(std::vector<int>& vInts, int in) {
    std::cout << "\nassigning " << in << " and printing the vector\n";
	vInts.assign(in, 0);
    printVectorInt(vInts);
}
void pushBackFunction(std::vector<int>& vInts, int in) {
    std::cout << "\npush back " << in << " and printing the vector\n";
	vInts.push_back(in);
    printVectorInt(vInts);
}
void emplaceFunction(std::vector<int>& vInts, int loc, int in) {
    std::vector<int>::iterator it = vInts.begin() +loc;
    std::cout << "\nemplacing " << in << " and printing the vector\n";
	vInts.emplace(it, in);
    printVectorInt(vInts);
}