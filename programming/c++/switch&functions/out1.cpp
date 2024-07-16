#include<iostream>
using namespace std;

void update(int a ){
    a = a/2;
    cout << " value in func update :" <<  a << endl;
}


int main()
{
    int a;
    cin >> a;
    update (a);
    cout << a << endl;





return 0;
    
}