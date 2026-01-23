#include<iostream>
#include <cstring> 
using namespace std;

void reverse(char word[], int n){
   char st = 0 , end = n-1;

   while( st < end ){
        swap(word[st],word[end]);
        st++;
        end--;
   }
   cout << word << endl;

}

int main () {

   char word[] = "apple";

    reverse(word,strlen(word));


    return 0;
}