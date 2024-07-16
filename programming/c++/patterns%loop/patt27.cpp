#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while( i<=n){
       //first  tri
        int j=1;
        while(j<=n-i+1){
            cout<< j;
            j=j+1;


        } 
       
        // tri 2
        int start= i-1;
        while (start)
        {cout<< "*";
        start=start-1;
        }

        // tri 3
         int start2= i -1 ;
        while (start2)
        {cout<< "*";
        start2=start2-1;
        }
        // tri4
        int j2= 1;
        while (j2<=n-i+1)
        {
            cout<< n-j2+1;
            j2=j2+1;
        }
        cout<< endl;
        i=i+1;


    }
}