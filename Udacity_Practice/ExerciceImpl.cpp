#include "ExerciceImpl.h"
#include "Aula_Classes.h"
#include "TempImpl.cpp"
#include "Shape.h"
#include "Inheritance.h"
#include "MultipleInheritance.h"
#include "VectAndIterator.h"

void func_aula_classes() {
    int integer1;
    double value_2;
    Student student1;

    integer1 = 4; //assign a value to integer1
    value_2 = 4.333; //assign a value to float1

    student1.setName("Catherine Gamboa"); //assign a value to the student name
    student1.setId(54345); //assign a value to the student id number
    student1.setGradDate(2017); //assign a value to the student grad date

    //Let's print the values of our variables
    std::cout << "integer1 = " << integer1 << "\n";
    std::cout << "value_2 = " << value_2 << "\n\n";

    //There are two ways we can print the values of our class:
    //The first is to call the print function we created.
    std::cout << "Using the Student::print function\n";
    std::cout << "Student1 = ";
    student1.print();
    std::cout << "\n\n";

    //The second is to access each member of the class using the get functions
    std::cout << "Using the student access functions\n";
    std::cout << "Student1 name = " << student1.getName() << "\n";
    std::cout << "Student1 ID = " << student1.getId() << "\n";
    std::cout << "Student1 Grad Date = " << student1.getGradDate() << "\n";
}

void func_aula_classes2() {
    Cat cat;
    cat.setName("Teste");
    cat.setBreed("Coil");
    cat.setAge(12);
    cat.printInfo();

    Cat cat2;
    cat2.printInfo();
}

// ==================================================================================

void arrayAsPointer(int* array, int size) {
    size = sizeof(array) - 1;
    std::cout << size << "\t";
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

void arraySized(int array[3], int size) {
    size = sizeof(array);
    std::cout << size << "\t";
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

void arrayUnSized(int array[]) {
    int size = sizeof(array) - 1;
    std::cout << size << "\t";
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

int search(int array[], int key) {
    int size = sizeof(array);
    std::cout << size << "\n";
    for (int i = 0; i < size; i++) {
        if (array[i] == key)
            return key;
        else
            return -1;

    }
}

void main_aula_function() {
    const int size = 3;
    //int array[size] = { 33,66,99 };
    int array[] = { 345,75896,2,543 };
    arrayAsPointer(array, size);
    arraySized(array, size);
    arrayUnSized(array);

    int array2[] = { 345,75896,2,543 };
    int searchKey = 543;
    std::cout << "Found at: " << search(array2, searchKey);
}

// Templetes
// ==================================================================================

void templateExercice() {
    int a = 90;
    int b = 1;
    auto value = sumTwo(a, b);
    std::cout << a << " + " << b << " = " << value << std::endl;
}

void templateExerciceTwo() {
    int a = 5;
    float b = 6.334;
    auto bigger = getBigger(a, b);
    std::cout << "Between " << a << " and " << b << " " << bigger << " is bigger.\n";
    bigger = getBigger(b, a);
    std::cout << "Between " << a << " and " << b << " " << bigger << " is bigger.\n";
}

void templateExerciceThree() {
    //StudentRecord is the generic class
    //The constructor sets the grade value
    StudentRecord<int> srInt(3);
    srInt.setId(111111);
    srInt.printGrades();

    StudentRecord<char> srChar('B');
    srChar.setId(222222);
    srChar.printGrades();

    StudentRecord<float> srFloat(3.333);
    srFloat.setId(333333);
    srFloat.printGrades();

    StudentRecord<string> srString("B-");
    srString.setId(4444);
    srString.printGrades();
}

// ==================================================================================

void operatorExercicio() {
    Shape sh1(4, 4);    // Declare shape1
    Shape sh2(2, 6);    // Declare shape2
    Shape sh3();        // Declare shape3

    int total = sh1 + sh2;
    bool equal = sh1 == sh2;

    std::cout << "\nsh1.Area() = " << sh1.Area();
    std::cout << "\nsh2.Area() = " << sh2.Area();
    std::cout << "\nTotal = " << total << std::endl;

    equal ? std::cout << "sh1 e sh2 Iguais" : std::cout << "sh1 e sh2 Diferentes";
}

// Inheritance
// ==================================================================================

void inheritenceExceci() {
    Rose r1;
    r1.setBloomTime("spring");
    r1.setFragrance("strong");

    std::cout << "r1 blooms in " << r1.getBloomTime() << ", " << r1.getFragrance() << std::endl;
}

// Multiple Inheritance

void multiInheritenceExceci() {
    Pet p1;
    p1.setName("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");

    std::cout << p1.getName() << " " << p1.getIdNumber() << " " << p1.getBreed() << std::endl;
}

// Vector
// ==================================================================================

void iteratorExercice() {
    std::vector<int> vectorInts;
    std::vector<int>::iterator it;

    std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

    std::cout << "\n\nAdding four elements to the vector\n";
    //assigning the value 3 to 4 elements of the vector
    vectorInts.assign(4, 3);
    std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

    //printing the contents of vectorInts
    std::cout << "VectorInts has these elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout << *it << " ";
}

void iteratorExercice2() {
    std::vector<float> vFloat;

    std::cout << "vFloat has " << vFloat.size() << " elements\n";

    std::cout << "\n\nAdding 10 elements to the vector\n";

    for (int i = 0; i < 10; i++) {
        vFloat.push_back(i * 2);
    }

    std::cout << "vFloat has " << vFloat.size() << " elements\n";
    
    printVector(vFloat);
}

void iteratorExercice3() {
// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

    vector<int> vInts;
    vInts.assign(10, 5);
    printVectorInt(vInts);
    assignFunction(vInts, 1);
    pushBackFunction(vInts, 2);
    emplaceFunction(vInts, 1, 3);
    vInts.clear();
    printVectorInt(vInts);
}
