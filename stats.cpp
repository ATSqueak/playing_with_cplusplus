#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);
int hits[10];

int main() {
    int n;
    int i;
    int r;

    srand(time(NULL)); //set seed for random numbers.

    cout << "Enter number of trials to run"; // Note the higer the number the better the accuracy e.g. 20000
    cout << "and press ENTER: ";
    cin >> n;

    //Run n trials. For each trial get a number from 0 to 9 and then increment the corresponding element in the hits array.

    for (i=1;i<=n;i++){
        r=rand_0toN1(10);
        hits[r]++;
    }

    //Print all the elemts in the hits array along with the rstio of hits to the EXPECTED hits (n/10).

    for (i=0;i<10;i++){
        cout << i << ": " << hits[i] << " Accuracy: ";
        cout << static_cast<double>(hits[i])/(n/10) << endl;
    }
    return 0;
}

//Randoom 0-to-N1 function. Generate a random interger from 0 to N-1.

int rand_0toN1(int n){
    return rand() % n;
}
