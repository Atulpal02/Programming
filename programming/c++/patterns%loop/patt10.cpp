#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 1;
    char alpha = 'A';

    while (i <= n){
        int j = 1;
        while(j <= n){ 
            cout<< alpha; 
            j = j + 1;
            
        }alpha = alpha+1;
       cout<< endl;
        i = i + 1;
    } 
    
    
}