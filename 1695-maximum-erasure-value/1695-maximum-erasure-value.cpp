// class Solution {
// public:
//     int maximumUniqueSubarray(vector<int>& nums) {
//         int arr[100005];
        
//         memset(arr, -1, sizeof(arr));
//         int len = nums.size(), ans = 0, mx=nums[0];
//         int left = 1, right =0;
//         vector<int> sum(len);

//         sum[0]=nums[0];
        
//         for(int i=1; i<len; i++){
//             sum[i]= sum[i-1]+ nums[i];
//             // cout<<sum[i]<<endl;
//         }

//         while(right<len){

//             if(arr[nums[right]] == 0){
//                                 // cout<<arr[nums[right]]<<" "<<nums[right]<<endl;

//               ans = left-1 < 0 ? sum[right] : sum[right] - sum[left-1];
                
//               arr[nums[right]]=right;
//             }
//             else{
                
//                 int val = arr[nums[right]];
//                 ans = ( sum[right] - sum[val]);
//                 left = val + 1;
//                 arr[nums[right]] = right;
//                 // cout<<sum[right]<<" "<<sum[val+1]<< val+1<<endl;
//                 }
            
//             right++;
            
//              mx = max(mx, ans);

//         }
//         return mx;
//     }
// };

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int result = 0;
        unordered_set<int> hset;
        for (int i = 0, j = 0, win = 0; j < nums.size(); j++) {
            while (hset.find(nums[j]) != hset.end()) {
                hset.erase(nums[i]);
                win -= nums[i];
                i++;
            }
            hset.insert(nums[j]);
            win += nums[j];
            result = max(result, win);
        }
        return result;
    }
};