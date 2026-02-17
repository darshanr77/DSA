#include <iostream>
using namespace std;
  // using three pointers

void mergeNum(int* num1,int* num2,int n,int m){

    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while(i>=0 && j>=0){

        //for checking large value and place it in last of num1
        if(num1[i] > num2[j]){
            num1[k] = num1[i];
            i--;
        }
        else{ // num1[i] < num2[j]
            num1[k] =  num2[j];
            j--;
        }
        k--;
    }

    //for printing all ele of num2 in num1[k]
    while(j>=0){
        num1[k] = num2[j];
        j--;
        k--;
    }
}


int main() {

    int num1[] = {1,2,3,4,0,0};
    int m = 4;

    int num2[] = {1,2};
    int n = 2;

    mergeNum(num1,num2,n,m);

    for(int i=0; i<m+n; i++){ // size of merged num1 ie m+n is important
        cout << num1[i]<< ","<<endl;
    }


    return 0;
}
