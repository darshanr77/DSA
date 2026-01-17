#include<iostream>
using namespace std;


// with extra space and without using extra space

// for extra psace we have to create a copy arr so that we can print theoriginal array backwards and overwrite on original array


int main () {

    int arr[5] = {5, 4, 3, 1, 2};    
    int n = sizeof(arr)/sizeof(int);

    int copyArr[n];        

    for (int i=0 ; i<n ; i++ ){
        int j = n-i-1;              // n-i-1 will be the last element for i=0 and for i=1 n-i-1 will be last second
        copyArr[i] = arr[j];        // here we will reverse the copyArr 
    }

    for (int i=0; i<n ; i++){
        arr[i] = copyArr[i];        // here we will paste the coprArr in arr
    }
    
    return 0;
}
