#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int i= 0,ans= 0;

    while(n!=0){
        int digit= n % 10;
        if((ans > INT_MAX /10  ) || (ans < INT_MIN /10)){
            cout<< 0 << endl;
           

        }
          ans = (ans * 10 )+ digit ;
           n=n/10;

    }
    cout<< ans << endl;


}
