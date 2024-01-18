class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> LIS;
        
        for(auto &num: nums){
            auto place = lower_bound(LIS.begin(), LIS.end(), num) - LIS.begin();
            
            if(place == LIS.size()){
                LIS.push_back(num);
            } 
            else LIS[place] = num;
        }
        return LIS.size();
    }
};