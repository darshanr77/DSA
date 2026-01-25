#include<iostream>
#include<string>
using namespace std;

// Count how many times lowercase vowels occurred in a String entered by the user



int main () {

     string str;
    int count = 0;


    cout << "Enter your string :";
    getline(cin,str);

     string vowels = "aeiou";

    for(int i=0; i<str.length(); i++){          // idx element of string entered bu user
        for(int j=0; j<vowels.length(); j++){   // idx of vowels 
            if(str[i] == vowels[j]){
                count++;
            }
        }
    }

    cout << "No. of times lowercase vowels occured in your string :"<<count<<endl;

    return 0;
}