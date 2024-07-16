  #include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>> a >> b;
    int ans = 1;



    for(int i=1;i<= b; i++ ){ // we used a loop so that the number of times
        ans = ans * a;        // we get to multipy a from 1 to b times.
    }
    cout<< "answer is " << ans << endl;

    int c ,d ;
    cin>> c >> d;
     ans = 1;



    for(int i=1;i<= d; i++ ){// we used a loop so that the number of times
        ans = ans * c;        // we get to multipy a from 1 to b times.
    }
    cout<< "answer is " << ans << endl;

    return 0;
     
}
