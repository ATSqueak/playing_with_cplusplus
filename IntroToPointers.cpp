#include <iostream>

using namespace std;

//Pointers are data-types that are memory addresses
//A pointer variable holds the memeory address
//Dereferencing the pointer will return the value held in the memory address

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int age = 19;
    double gpa = 2.7;
    string name = "Mealy";
    

    int *pAge = &age;
    double *pGPA = &gpa;
    string *pName = &name;
    
    cout << "Age memory address is: " << &age << endl;
    cout << "Age memory address is: " << pAge << endl;
    cout << "Derferencing age pointer: " << *pAge << endl; // dereferencing the pointer variable
    cout << "Derferencing age pointer: " << *&age << endl; // dereferencing the pointer

    cout << "GPA memory address is: " << &gpa << endl;
    cout << "GPA memory address is: " << pGPA << endl;
    cout << "Derferencing gpa pointer: " << *pGPA << endl; // dereferencing the pointer variable
    cout << "Derferencing gpa pointer: " << *&gpa << endl; // dereferencing the pointer
    
    cout << "Name memory address is: " << &name << endl;
    cout << "Name memory address is: " << pName << endl;
    cout << "Derferencing name pointer: " << *pName << endl; // dereferencing the pointer variable
    cout << "Derferencing name pointer: " << *&name << endl; // dereferencing the pointer

    
    return 0;
}
