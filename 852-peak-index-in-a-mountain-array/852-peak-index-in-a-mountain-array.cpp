class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int len = arr.size();
        
        int ans=-1, ind=-1;
        
        for(int i=0; i<len; i++){
            
            if(arr[i]>ans){
                ans = arr[i];
                ind =i;
            }
            
        }
        return ind;
    }
};