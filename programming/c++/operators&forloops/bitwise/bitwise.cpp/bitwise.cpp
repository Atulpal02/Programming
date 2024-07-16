#include<iostream>
using namespace std;

int main(){
    //applying bitwise operator
    int a = 4;
    int b = 6;
    
   
    cout<< " ~b "<< ~b << endl;;
    cout<< " a&b " << (a%b) << endl ;
    cout<< " a|b " << (a|b) << endl;
    cout<< " a^b " << (a^b) << endl;

   // shifting to the right 
    cout<< " 5>> 2 " << (5>>2) << endl;

    // shifting to the left
    cout<< "b>> 2 " << (b>>2) << endl;

}