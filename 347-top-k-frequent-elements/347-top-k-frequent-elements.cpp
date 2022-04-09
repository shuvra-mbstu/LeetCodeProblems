class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;
        vector<int> ans;
        vector<pair<int,int>> vt;
        
        int len = nums.size();
        
        for(int i=0; i<len; i++){
            mpp[nums[i]]++;
        }
                
        for(auto &i : mpp){

            vt.push_back({i.second,i.first});
        }
        
        sort(vt.begin(), vt.end());
        reverse(vt.begin(), vt.end());
        
        int coun =1;
        for(auto &i: vt){
            if(coun>k)break;
            // cout<<i.first<<" "<<i.second<<endl;
    
            ans.push_back(i.second);
            coun++;
        }
        
        return ans;
    }
};