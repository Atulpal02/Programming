#include<iostream>
using namespace std;
int main(){

    int n;
    cin>> n;
     int i =1;

   
    while (i<=n)
    {
        int j=1;
         char ch= 'A'+ n-i ;// logic is only this formula
        while ( j<=i)
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
