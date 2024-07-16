#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<< "enter the number"<< endl;
    cin>> n;
/* very basic for children
    for( int i = 2; i<=n ; i++ ){
        if(n%i==0){
            cout<< " divi by   " << i << endl ; 
        }
        else{ 
            cout<< " not divi by " << i<< endl ;
        
             }
    }
    */
   bool isprime = 1;
   for ( int i = 2; i <n ; i++)
   {
    if (n%i==0){
        isprime = 0;
        break;
    }
   }
   if( isprime==0){
    cout<<" It is not a prime number" << endl;
   }
   else{

    cout<< " Is a prime number" << endl;
   }

}