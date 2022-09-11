//Programming Language Used: C++

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = k % nums.size();
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+length);
        reverse(nums.begin()+length, nums.end());        
        
    }
};

// Time Complexity: O(3*N) ~ O(N) where N is the nums array size
// Space Complexity: O(1) here we are using constant space and used in place algorithm