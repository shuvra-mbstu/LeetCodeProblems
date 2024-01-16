class Solution {
public:
    
    bool fun(string &num, int ind, vector<long> &res){
        
        int len = num.size();
        int res_l = res.size();
        
        if(ind == len && res_l> 2) return true;
        
        unsigned long long num1 = 0;
        
        for(int i=ind; i<len; i++){
            num1 = num1 * (long) 10 + (long) (num[i]-'0');
            
            if(num1 > LLONG_MAX)return false;
            
            if(num[ind]== '0' && i>ind) return false;

            
            if(res_l < 2 || res.back() + res[res_l-2] == num1){
                res.push_back(num1);
                
                if(fun(num, i+1, res)) return true;
                
                res.pop_back();
                
            }
        }
        return false;
    }
    
    bool isAdditiveNumber(string num) {
        vector<long> res;
        return fun(num, 0, res);
    }
};