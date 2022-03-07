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
    
    cout << &age << endl;
    cout << pAge << endl;
    cout << *pAge << endl; // dereferencing the pointer variable
    cout << *&age << endl; // dereferencing the pointer
    
    return 0;
}
