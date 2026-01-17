#include<iostream>
using namespace std;

//    ptr++  OR  ++ptr
//      int ->> 4byte
//      char ->> 1byte
//  if we do int ptr++ then the element will move 4 index from current in arr or any other DS due to size of int
//  if we do char ptr++ then the element will move 1 index from current in arr or any other due to size of char




int main () {

    int a = 10;           // OR char
    int* ptr = &a;

    cout << ptr <<"\n";

    ptr++;                // ptr-- means it goes left or back by 4 positions if int 

    cout << ptr <<"\n";

    return 0;
}