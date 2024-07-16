#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i =1;
     while(i<=n){
       int j=1;
       while(j<=n){
        cout<< i; // beacuse row has value of row
        j=j+1;
       }
       cout<< endl;  // row 1 col 1 choosen up then row 1 gets loop of j from 1 to n. with value of row.
    

     }



}