#include<iostream>
using namespace std;

void singleNum(int* num,int n){
    int ans = 0;

    for(int i=0; i<n; i++){
        ans = ans ^ num[i]; // ^ means XOR which clears the ans in which both numbers or ans and num[i] both bits are same then it clears it if not stores it which is single number
    }

    cout << ans << endl;

}

int main (){

    int num[] = {4,1,2,4,1};
    int n = sizeof(num)/sizeof(int);

    singleNum(num,n);

    return 0;
}











// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans = 0;
//         int n = nums.size();

//         for(int i=0; i<n; i++){
//             ans = ans ^ nums[i]; // ^ xor operation same bits 0 diff bits 1
//         }
//         return ans;

//     }
// };

// // xor cancels duplicate numbers
// // if same number or single with 0 then it stores