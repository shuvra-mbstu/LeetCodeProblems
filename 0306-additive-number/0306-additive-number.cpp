class Solution {
public:
    
    bool helper(string& str, int i, vector<long long>& ans)
    {
        // base case, if we have reached the end of str and ans.size() >= 3, than return true
        
        int n = str.size();
        
        if(i == n && ans.size() >= 3)
            return true;
        
        // must take unsigned long long because long long is giving overflow
        
        unsigned long long num = 0;
        
        for(int j = i; j < n; j++)
        {
            // calculate num
            
            num = num * (long long) 10 + (long long) (str[j] - '0');
            
            // this can't be include in ans
            
            if(num > LLONG_MAX)
                return false;
            
            // handling the leading zero
            
            if(str[i] == '0' && j > i)
                return false;
            
            // if ans array has less than 2 numbers then simply insert into ans array
            
            // if ans array has greater than equal 2 numbers then check if last two numbers sum up to num then insert into ans array
            
            if(ans.size() < 2 || ans.back() + ans[ans.size() - 2] == num)
            {
                ans.push_back(num);
                
                if(helper(str, j + 1, ans))
                    return true;
                
                // if added num doesn't lead to ans then backtrack
                
                ans.pop_back();
            }
            
        }
        
        return false;
    }    
    
    bool isAdditiveNumber(string str) {
        
        int n = str.size();
        
        vector<long long> ans;
        
        return helper(str, 0, ans);
    }
};