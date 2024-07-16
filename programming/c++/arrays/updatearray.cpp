#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout <<  " inside the function" << endl;
     for (int i = 0 ; i< n ; i++){
        cout << arr[i] << " " ;

        arr[2] = 120;
        
     }
     cout<< endl;

     cout << "going back to main function  " << endl;

     // this show that updation is done in actual array and not in any copy.
}



int main()
{
    int arr[3] = { 3 , 4 , 5};


    update(arr, 3);

    for(int i = 0; i<3 ; i++){
        cout << arr[i] << " ";

    }
    cout << endl;






return 0;
    
}