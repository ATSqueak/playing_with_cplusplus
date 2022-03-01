#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    cout << "Enter the number of dice: ";
    cin >> n;
    cout << "The values on the dice are: " << endl;
    for (int i=0;i<n;i++){
        cout << (rand()%6)+1 << " " << endl;
        
    }
    
    return 0;
}
