#include<iostream>
using namespace std;

// literals means the value is fixed like 'apna college'

int main () {


    int cha = 'a';
    int ch2 = 'A';
    int ch3 = '%';
    int ch4 = '9';
    int ch5 = '\n'; // -> next 
    int ch6 = '\t'; // -> tab space


    char ch = 'a';

    cout << ch << endl;         // a
    cout << (int) ch << endl;   // 97


    char charr = 'd';           // same for capital
    int pos = charr - 'a';      // same for capital

    cout << pos << endl;        // same for capital ie 3


    char work[5] = "code";          // 5 beacuse null character in this no need to write '\o'
    cout << work << sizeof(work)<< endl;


    return 0;
}