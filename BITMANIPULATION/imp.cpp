#include<iostream>
using namespace std;

// to do ~ OR tilde operation there are some steps
// for any numbers take 32bits ie 8byte the first is MSB after 1's compliment
// step 1 -> eg 6 00000110 take its 1's compiment ie 11111001
// step2 -> check MSB most significant byte which is first if its 1 then -ve if 0 then +ve for 6 its 1 then -ve
// step3 -> add one in right then 0000111 then its -7 bcoz MSB is 1 and leave MSB then 7 numbers 

int main(){

    cout << (~6)<< endl;
    cout << (~0)<< endl;


    return 0;
}