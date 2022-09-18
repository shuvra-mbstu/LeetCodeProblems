class Solution {
public:
    int trap(vector<int>& hei) {
        int lef_max=hei[0];
        int rig_max=hei[hei.size()-1];
        
        int ans=0;
        int i=1,j=hei.size()-1;
        while(i<=j){
            lef_max=max(lef_max,hei[i]);
            rig_max=max(rig_max,hei[j]);
            
            if(lef_max<rig_max){
                ans+=(lef_max-hei[i]);
                i++;
            }
            else{
                ans+=(rig_max-hei[j]);
                j--;
            }
        }
        return ans;
    }
  
};