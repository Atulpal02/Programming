#include<iostream>
using namespace std;
int main(){

    int n;
    cin>> n;
     int i =1;
      

   
    while (i<=n)
    {
        int j=1;
        char ch= 'A'+ i + j -2;// for abc and bcd pattern 
         
        while ( j<=n)
        {

            cout<< ch;
            ch= ch+1;
            j= j+1;
            /* code */ 
        }
        cout<< endl;
        i = i +1;
        
    }
    

     
     
}
