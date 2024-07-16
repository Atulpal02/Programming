#include<iostream>
using namespace std;

    void reverse(int arr[], int n ){
        for(int i = 0 ; i< n ; i++){
            int start = 0 ; // key is having start and end
            int end = n-1 ;


            while (start <= end){  // loop to swap
                swap(arr[start], arr[end]);
                start++;
                end--;

            }
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
    reverse(arr, 5);
    reverse(brr, 5);

    // printing array
    printArray(arr, 5); 
    printArray(brr, 5);


return 0;
    
}