#include<iostream>
using namespace std;

    void swapalternate(int arr[], int n ){
        for(int i = 0 ; i< n ; i++){
            swap(arr[i+1],arr[i]);
            i=i+2;
            
               
            }
        }
    

    void printArray(int arr[] , int n){

        for(int i = 0 ;i < n ;i++){
        cout<< arr[i] << "  " ;
        }cout << endl;
    }


   int main(){


    int arr[5] ={ 2, 4 , 6 , 8 , 10};
    int brr[5] = { 3, 6, 9, 12 , 15};


    //reversing array
    swapalternate(arr, 5);
    swapalternate(brr, 5);

    // printing array
    printArray(arr, 5); 
    printArray(brr, 5);


return 0;
    
}