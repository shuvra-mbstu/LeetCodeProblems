class Solution {
public:
    int brokenCalc(int startValue, int target) {
        if(startValue==target) return 0;
                
        if(startValue>target) return startValue - target;
        
    
        int coun = 1000000000;

        int ans = 0;
        while(startValue < target){
            ans ++;
             if (target % 2 == 1)
                target++;
            else
                target /= 2;
        }
        
        return ans + startValue - target;
    }
};