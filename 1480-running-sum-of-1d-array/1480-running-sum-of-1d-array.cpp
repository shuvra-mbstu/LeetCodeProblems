class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vt;
        int coun =0;
        int len = nums.size();
        for(int i=0;i<len; i++){
            coun+=nums[i];
            vt.push_back(coun);
        }
        return vt;
    }
};