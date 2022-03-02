#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    
    int i, current, j;
    for (i=1;i<n;i++){
        current = arr[i];
        j=i-1;
        
        while (j>=0 && arr[j] > current){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = current;
        
    }
    
}

void printArray(int arr[], int n){
    int i;
    for (i=0;i<n;i++){
        cout << i << " :: " << arr[i] << " ";
        cout << endl;
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int arrayOfNumbers[] = {7,3,10,4,1,11};
    
    int n = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
    
    //cout << sizeof(arrayOfNumbers) << endl;
    //cout << sizeof(arrayOfNumbers[0]) << endl;
    insertionSort(arrayOfNumbers, n);
    printArray(arrayOfNumbers, n);

    
    return 0;
}
