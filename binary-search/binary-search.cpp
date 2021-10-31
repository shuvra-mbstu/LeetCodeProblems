// Used language: C++

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size() - 1;
        int low = 0;
        
        while(low <= high){
            int mid = (low+high)/2;
            
            if(target>nums[mid]) low = mid+1;
            else{
                
                if(nums[mid]==target)return mid;
                
                high = mid-1;
            }
        }
        return -1;
        
    }
};

// Time Complexity: Log(n) here n is the length of the array
// Space Complexity: O(1)