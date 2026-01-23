#include<iostream>
#include<string>
using namespace std;



int main () {

    string str = "apna school";


    //both are same
    cout << str[3]<<endl;
    cout << str.at(3)<<endl;

    //sub string
    cout << str.substr(0,5);
   


    return 0;
}