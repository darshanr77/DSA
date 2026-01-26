#include<iostream>
using namespace std;
// new keyword is used to allocate new memory 


int main (){


    int size;
    cout <<"enter the size of an array :";
    cin >> size;

    int* arr = new int[size];

    int x = 0;
    for(int i=0; i<size; i++){
        arr[i] = x;
        x++;
        cout << x << " ";
    }
    cout<<endl;
}