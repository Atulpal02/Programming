#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<< "enter the number"<< endl;
    cin>> n;
    for (int i=0 ; i<n ; i++){
        for (int j=i ; j<=n ; j++){
if(i+j== 20){
    break;
    }
    cout<<i << " " << j << endl;
        }
    }


}