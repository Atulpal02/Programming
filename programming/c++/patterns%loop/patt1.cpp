#include<iostream>
using namespace std;
int main(){

int n;
cin>> n;

int i= 1;

while(i<=n){
    int j=1;
    while(j<=n){
        cout<< '*';
    j=j+1;
    }
    cout<< endl; //remebr to cut the row to start with another row.
    i= i+1;
}


}