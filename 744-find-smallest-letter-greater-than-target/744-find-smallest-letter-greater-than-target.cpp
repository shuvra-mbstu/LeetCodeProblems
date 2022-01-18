class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lo = 0, hi = letters.size()-1, ans=0;
        
        while(lo <= hi){
            int mid = (hi + lo) / 2;
            
            if(letters[mid]>target){
                hi = mid - 1;
                ans = mid;
            }
            else{
                lo = mid + 1;
            }
        }
        return letters[ans];
    }
};