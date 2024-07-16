#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter the number";
    cin>> n;
     int prev= 0;
     cout<< prev<< endl;

    int next=1;
    cout<< next << endl;
   
    for(int i=3;i<=n; i++){
       int sum= prev + next;
        prev= next;
        next= sum;

        cout<< sum<< endl;


    }

}