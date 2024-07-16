#include<iostream>
using namespace std;

float power() {    // make a function to recall it later
    float a , b ;
    cin >>  a >> b ;

    float ans = 1;

    for(float i = 1 ; i<= b ; i++){
        ans= ans * a;

    }
    //for recalling the function again and again
    return ans;
}
int main(){
    float ans = power();
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