#include<iostream>
using namespace std;
//for binary search the array or numbers or values must be sorted
//1-> cal mid   mid=(st+end)/2;
//2-> verify mid with key value whether arr[mid] = key; return mid;
//3-> if(arr[mid] < key)  st = mid+1; end = n-1;
//3-> if(arr[mid] > key)  st = 0; end = mid-1;

int BinSearch(int arr[] , int n , int key) {
    int st = 0;
    int end = n-1;

    while(st <= end){
        int mid = (st+end)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;   
}

int main () {

    int arr[] = {2,4,6,8,10,12,14,16,18,20,24};    
    int n = sizeof(arr)/sizeof(int);
    int key = 12;

    int index = BinSearch(arr , n , key);
    
    if(index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
 
    return 0;
}
