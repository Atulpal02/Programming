#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<< row - col+1;// we set a relation so that as column increases the count decresees side ways.
            col=col+1;
        }
        cout<< endl;
        row=row +1;
    }
    
}