#include<iostream>
using namespace std;

void LinSearch(int arr[], int n, int key){
    for (int indx = 0; indx < n; indx++){
        if (arr[indx] == key){
            cout << "Element found at index " << indx << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

int main () {

    int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(int);
    int key = 10;

    LinSearch(arr, n, key);

    return 0;
}
