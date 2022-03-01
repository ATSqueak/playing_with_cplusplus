#include <iostream>

using namespace std;

void sayHi(string name, int age){
    
    cout << "Name: "  << name << "  Age: " << age << endl;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    sayHi("Stock", 50);
    sayHi("Keble", 20);
    sayHi("Triple", 30);
    

    return 0;
}
