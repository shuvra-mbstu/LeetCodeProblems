class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        
        int max_n = *max_element(candies.begin(), candies.end());
        
        for(int i : candies){
            res.push_back(i + extraCandies >= max_n);
        }
        return res;
    }
};