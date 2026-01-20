#include <iostream>
#include <algorithm>
using namespace std;

void printA(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}



//bubble sort for descending order

void bubbleSort(int*arr , int n){
    for(int i=0; i<n-1; i++){           //just runs till sorted part of arr
        for(int j=0; j<n-i-1;j++){      // n-i-1 bcoz i elements are sorted main part
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);  // not used i bcoz i is used to run till the sorted part of array
            }
        }
    }
    printA(arr,n);
}

int main() {

    int arr[10] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
    return 0;
}
