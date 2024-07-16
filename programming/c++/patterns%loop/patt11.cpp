#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 1;
    
    

    while (i <= n){
        int j = 1;
        char alpha = 'A';// putting out of the loop helps to get desire repetition
        //for no repetition put this outside loop
        while(j <= n){ 
            
            cout<< alpha; 
            j = j + 1;
            alpha = alpha+1;//placing these at right place helps to get desired order of A.
            
        }
       cout<< endl;
        i = i + 1;
    } 
    
    
}