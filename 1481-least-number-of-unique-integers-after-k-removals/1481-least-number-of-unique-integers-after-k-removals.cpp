class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> mpp;
        vector<int> res;

        int len = arr.size();
        
        if(k==len) return 0;
        
        for(int i=0; i<len; i++){
            mpp[arr[i]]++;
        }
        
        // sort(mpp.begin(), mpp.end());
        
        int count=0, num=0;
        for(auto i : mpp){
            res.push_back(i.second);
        }
        
        sort(res.begin(), res.end());
        
        int i=0;
        for(;i<res.size(); i++){
            if(count + res[i]>k)break;
            
            count += res[i];
            // cout<<count<<endl;
        }
        return res.size() - i;
    }
};