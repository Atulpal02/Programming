#include<iostream>
using namespace std;

bool isprime(int n){

    for(int i = 2; i< n ;i++){

        if (n%i==0){
            return 0;
        }

    }
    return 1;
}
int main(){

    int n;
    cin>> n;
    if (isprime(n)){
        cout << "is a prime no " << endl ;
    }
    else{
        cout<< "is not a prime no. "<< endl;
    }
   /*if (isprime(n)==0){
        cout << "number is not prime" << endl;

    }
    else{
        cout<< " number is prime " << endl ;
    }*/ 
}
