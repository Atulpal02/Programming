#include<iostream>
using namespace std;

// func signature
void printcounting(int n){
    

    //func body
    for (int i= 1;  i<= n ;  i++ ){

    cout<< i << endl;

    }

}

int main (){ // body
    int n;
    cin >> n;

    printcounting(n); // func call


    return 0;
}
