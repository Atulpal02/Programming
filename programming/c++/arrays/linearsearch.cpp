#include<iostream>
using namespace std;

    bool search(int arr[], int size, int key){ // tells yes or no
        for(int i =0 ; i <= size ; i++){

            if ( arr[i] == key){ //checks one by one 
                return 1;
            }
        }
       

     return 0;
    }


int main()
{

int arr[10] = { 5, 6 ,7 ,-3 ,34 ,23 ,-98 ,1 , 32 ,31 };

cout<< "enter the key element to search " << endl;
int key;
cin >> key;

bool found = search(arr, 10 , key);

if (found){
    cout<< "key is present " << endl;

}
else{
    cout<< " key is absent " << endl;
}



return 0;
    
}