#include<iostream>
#include<vector>
using namespace std;


// ways to reach nth step using one or step at a time


//fibonacci
//0(2^n)
int countwaysRecursionDP(int n){ 
    if( n == 0 || n == 1){
        return 1;
    }

    return countwaysRecursionDP(n-1) + countwaysRecursionDP(n-2); //bcoz we have to take 1 or 2 steps
}


//memoization
// 0(n)
int countwaysMemiozationDP(int n,vector<int> &dp){
    if( n == 0 || n == 1){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = countwaysMemiozationDP(n-1,dp) + countwaysMemiozationDP(n-2,dp);
    return dp[n];
}



//tabulation
//0(n)
int countwaysTabulationDP(int n, vector<int> &tab){
    tab[0] = 1;
    tab[1] = 1;

    for(int i = 2; i <= n; i++){
        tab[i] = tab[i-1] + tab[i-2];
    }

    return tab[n];
}

int main (){

    int n = 8;
    vector<int> dp(n+1,-1);
    vector<int> tab(n+1,-1);
    
    
     cout << countwaysRecursionDP(n) << endl;
     cout << countwaysMemiozationDP(n,dp) << endl;
    cout << countwaysTabulationDP(n,tab) << endl;

    return 0;
}