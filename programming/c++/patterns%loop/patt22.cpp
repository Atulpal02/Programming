#include<iostream>
using namespace std;
int main(){

    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int space = i- 1;// logic for intial to decrement condition
     
     while (space)
     {
        cout<< " ";
        space= space -1;// not knew the use of space -1;
        

        /* code */
     }
     int j  = 1;
     while (j<=n-i+1){// to reverse print the * ;
        cout<<'*';
        j++;

     }cout<< endl;
     i++;

      

     
}
}