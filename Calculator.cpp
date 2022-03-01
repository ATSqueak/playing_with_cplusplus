#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int num1,  num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator number: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
    int result = 0;
    
    if(op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*'){
        result = num1 * num2;
    } else if (op == '/'){
        result = num1 / num2;
    } else {
        cout << "Invalid operator";
    }
    cout << result << endl;
    
    return 0;
}
