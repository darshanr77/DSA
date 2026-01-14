#include<iostream>
using namespace std;


// pass by  reference using pointers  (replaces the original main value of a or b with the void function's value)

void changeA(int *ptr){
    *ptr = 10;
    cout << *ptr << endl;

}

int main () {
    int z = 5;
    cout <<"before" << z << endl;   
    changeA(&z);    // if u wnat to pass any parameters in void function first it must be initialized in this function m
    cout << "after" << z << endl;
}