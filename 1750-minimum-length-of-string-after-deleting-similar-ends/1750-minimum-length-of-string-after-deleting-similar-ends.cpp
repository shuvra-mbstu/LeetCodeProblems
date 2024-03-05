class Solution {
public:
    int minimumLength(string s) {
        int left =0, right= s.size()-1;
        
        while(left<right && s[left]==s[right]){
            // cout<<left<<" "<<right<<" "<<s[left]<<" "<<s[right]<<endl;
            left++;
            right--;
            
            while(left<=right && s[left]==s[left-1])left++;
            
            while(left<=right && s[right]==s[right+1])right--;

        }
        return left <= right ? right-left+1 : 0;
    }
};