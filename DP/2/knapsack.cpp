#include<iostream>
#include<vector>
using namespace std;

int knapsackRecursion(vector<int> val,vector<int> wt,int W,int n){
    if( n == 0 || W == 0){
        return 0;
    }
    int itemWeight = wt[n-1];
    int itemVal = val[n-1];

    if(itemWeight <= W){
        //include
        int ans1 = knapsackRecursion(val,wt,itemWeight-W,n-1) + itemVal;
        //exclude
        int ans2 = knapsackRecursion(val,wt,W,n-1);

        return max(ans1,ans2);
    }
    else{
        return knapsackRecursion(val,wt,W,n-1);
    }
}

int main (){

    vector<int> val = { 15,14,10,45,30 };
    vector<int> wt  = {2,5,1,3,4};
    int W = 7;
    int n = 5;

    cout << knapsackRecursion(val,wt,W,n) << endl;

    return 0;
}