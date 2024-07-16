#include<iostream>
using namespace std;

int power() {  // make a function to recall it later
    int a , b ;
    cin >>  a >> b ;

    int ans = 1;

    for(int i = 1 ; i<= b ; i++){
        ans= ans * a;

    }
    return ans; //for recalling the function again and again
}
int main(){
    int ans = power();
    cout<< "answer is :"<< ans << endl;

      ans = power();
    cout<< "answer is :"<< ans << endl;

     ans = power();
    cout<< "answer is :"<< ans << endl;

     ans = power();
    cout<< "answer is :"<< ans << endl;

     ans = power();
    cout<< "answer is :"<< ans << endl;

     ans = power();
    cout<< "answer is :"<< ans << endl;

     ans = power();
    cout<< "answer is :"<< ans << endl;

     ans = power();
    cout<< "answer is :"<< ans << endl;

     ans = power();
    cout<< "answer is :"<< ans << endl;

    ans = power();
    cout<< "answer is :"<< ans << endl;

    ans = power();
    cout<< "answer is :"<< ans << endl;

    ans = power();
    cout<< "answer is :"<< ans << endl;


}