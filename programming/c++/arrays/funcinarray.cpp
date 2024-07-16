#include<iostream>
using namespace std;


void printArray(int arr[], int size) {

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing DONE " << endl;
}

int main()
{
    int fifth[100] = {1};
    int  n = 20;

    int fifthsize = sizeof(fifth)/sizeof(int);

    cout<< "size of fifth " << fifthsize << endl; 
    int third[15];

    printArray(third,5); // calling the function;

    char ch[10] = {'a', 'b', 's' , 'd'};
    cout << ch[1] << endl;
// TYPES OF ARRAY
   


    





return 0;
    
}