#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>> n;

int i = 0, ans = 0;
while(n!=0){


int digit = n % 10;// use to take the last digit in simpler way
if (digit==1){

ans= digit* pow(2,i) + ans ;
}
n= n/10; // use to move to left digit in a simpler way
i++;
}

cout<< ans << endl;
}

