#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i =1;
     while(i<=n){
       int j=1;
       while(j<=n){
        cout<< n-j+1; // reversing the counting order in row 1 and colum 1
    
        j=j + 1;
       }
       cout<< endl; 
       i=i+1;
    

     }



}