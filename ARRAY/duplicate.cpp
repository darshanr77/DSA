#include <iostream>
#include <unordered_set>
using namespace std;

bool Duplicate(int nums[], int n) {

    unordered_set<int> s;                       // in this we will store only unique elements from nums[]

    for(int i=0 ; i<n ; i++){                   // for printing
        if(s.count(nums[i]) > 0){               // checking whether same numbers have occured 0,1,2 times if 0 then insert into s
            return true;
        }
        s.insert(nums[i]);
    }
    return false;                               // if s.count(nums[i] > o)
}

int main() {

    int nums[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(nums) / sizeof(int);

    // cout << (Duplicate(nums, n) ? "true" : "false");  OR

    if(Duplicate(nums,n)){
        cout << "true " << endl;
    }
    else{
        cout << "false " << endl;
    }
    return 0;
}
