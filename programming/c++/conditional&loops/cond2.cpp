// prime or not prime
#include<iostream>
using namespace std;
int main(){

    int i=2;
    int n;
    cin>>n;
    while(i<n){
        if(n%i==0){
          cout<< "divisible by"  << i << endl;
        }
        else{
          cout<< "  not divisble by " << i << endl;
        }                                                    
        i = i + 1 ;

    }

}