#include <iostream>

using namespace std;

void sort(int n);
void swap(int *p1, int *p2);
int a[8];

int main() {

    int i;
    for(i = 0; i < 8; i++) {
        cout << "Enter array element #" << i << ": ";
        cin >> a[i];
    }
    sort(8);
    cout << "Here are all the array elements sorted:"<<endl;
    for (i=0;i<8;i++)
        {
            cout << a[i] << endl;
        }
    return 0;
}

//Sort array function, sort array named a, having n elements
void sort(int n) {

    int i,j,low;
    for(i = 0; i < n - 1; i++) {
        //This part of the loop finds the lowest elemnt in the range i to n-1
        //the index is set to the variable named low
        low = i;
        for (j = i + 1; j < n; j++) {
            if(a[j] < a[low])
                low = j;
        }
        //This part of the loop performs a swap if needed
        if(i != low)
            swap(&a[i], &a[low]);
    }
}

//Swap function
//Swap the values pointed to by p1 and p2
void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
