#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    bool isBear = false;
    bool isFurry = false;
    
    if (isBear || isFurry){
        cout << "You are a furry bear!" << endl;
    } else if (isBear && !isFurry) {
        cout << "You are not furry but you are a bear"<<endl;
    }
    else {
        cout << "You are not a furry bear" << endl;
    }

    return 0;
}
