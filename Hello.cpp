#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    cout << "Hello World!" << endl;
    cout << " /___|" << endl;
    cout << "    /|" << endl;
    cout << "   / |" << endl;
    cout << "  /  |" << endl;
    string characterName = "Clesdy";
    int characterAge;
    characterAge = 55;
    cout << "There was someone name " << characterName << endl;
    cout << "They were " << characterAge << " years old" << endl;
    characterName = "Mule";
    cout << "They liked the name " << characterName << endl;
    cout << "But not being " << characterAge << endl;
    
    //Using Hex for ASCII values
    cout << "\x48\x65\x6c\x6c\x6f\x20\x57\x6f\x72\x6c\x64"<<endl;
    
    //Set width
    cout << setw(10) << 10+20/(10-5) << endl;
    
    //Different int types
    short int bean = 5;
    int bean1 = 1;
    long int bean2 = 3;
    long earth_diameter = 12756000L;
    signed int negat = -9;
    
    cout << bean << endl;
    cout << bean1 << endl;
    cout << bean2 << endl;
    cout << earth_diameter << endl;
    cout << negat << endl;
    
    
    //Byte size space for variable types
    cout << endl;
    cout << "Char: " << sizeof(char);
    cout << endl;
    cout << "Short: " << sizeof(short);
    cout << endl;
    cout << "Int: " << sizeof(int);
    cout << endl;
    cout << "Long: " << sizeof(long);
    cout << endl;
    cout << "Double: " << sizeof(double);
    cout << endl;
    cout << "Float: " << sizeof(float);
    cout << endl;
    cout << numeric_limits<short>::min();
    cout << endl;
    
    return 0;
}
