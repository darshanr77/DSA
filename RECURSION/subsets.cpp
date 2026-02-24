#include<iostream>
using namespace std;


void printSubsets(string &str,string subset,int i){
    //BC
    if(i == 0){
        cout << subset << "\n";
        return;
    }

    printSubsets()
}

// void printSubsets(string str,string subset){
//     //BC
//     if(str.size() == 0){
//         cout << subset << "\n";
//         return;
//     }

//     char idx = str[0];

//     //yes choice   means we are adding a
//     printSubsets(str.substr(1) , subset + idx);  // str.substr(1) means subset of 1 to n

//     //no choice   means we are not adding a moving to b and c
//     printSubsets(str.substr(1) , subset);
// }

int main(){


    string str = "abc";
    string subset = "";

    printSubsets(str,subset);

    return 0;
}