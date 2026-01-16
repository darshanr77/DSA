#include<iostream>
using namespace std;

int main () {

    int array[10];          // we can declare an array by size 

    int arr[] = {1,2,3,4};  // and empty [] declaration


    int ar[5] = {1,2,3};    // 3,4 index values in this array will be 0 (gabagge value)


    cout << ar[0] <<"," << ar[3] <<"," << ar[4] << endl;    // 1, 0 ,0

    return 0;
}