class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq; // int -> original number , freq of no in arr

        for(int n : nums){
            freq[n]++;  // if normal for loop then freq[n[i]]++

            if(freq[n] > nums.size() / 2){
                return n;
            }
        }
    }
};