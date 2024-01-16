class Solution {
public:
    
    bool fun(string &s, int ind, long long num1, long long num2, int x_time){
        
        int len = s.size();
        
        if(ind == len && x_time >2) return true;
        
         long long cur_num = 0;
        
        for(int i = ind; i<len; i++){
            
            if(cur_num>pow(10,17)) return false;
            
            cur_num = cur_num*10 + (s[i]-'0');
                        
            if(s[ind]=='0' && i > ind) return false;
            
            if((x_time<2) || num1 + num2 == cur_num ){    
                
                if(fun(s,i+1, num2, cur_num, x_time+1)) return true;
            }
            
            }
        
        return false;
        }
    
    bool isAdditiveNumber(string num) {

        return fun(num, 0, 0, 0, 0);
    }
};