#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int mask=0;
    int m= n;

    if(n==0){
        cout<< 1<< endl;

    }

    while(n!=0){

        mask = (mask<<1) | 1;
        n = n>> 1;
    }
     int ans =  (~n) & mask ;

    cout<< ans << endl;
}



    

       
     
    
    
