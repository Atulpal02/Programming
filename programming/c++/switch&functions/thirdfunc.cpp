#include<iostream>
using namespace std;


bool iseven(int a){
    if(a&1){
        return 0;

    }
    else{
        return 1;
    }

}
int main(){
    int n;
    cin >> n;

    if( iseven(n) ){
        cout<< "number is even";

    }
    else{
        cout << "number is odd";
    }
    return 0;
}

