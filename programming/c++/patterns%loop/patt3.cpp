#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i =1;
     while(i<=n){
       int j=1;
       while(j<=n){
        cout<< j; // beacuse column has value of column
        j=j+1;
       }
       cout<< endl;
       i = i+1;// row 1 col 1 choosen up then row 1 gets loop of j from 1 to n.
     // then row changes again j loops from1 to n.then row changes till n.

     }



}