#include<iostream>
using namespace std;
int main(){

    int n;
    cin>> n;
    int i= 1;

    char ch ='*';
    while (i <=n)
    {
        int j = 1;
        while (j<= n-i+1 ) //to reduce j wrt row 
        {
            cout<< ch;
            j=j+1;
            
        }cout<< endl;
        i =i +1;
        
        
    }
    


    
   

}