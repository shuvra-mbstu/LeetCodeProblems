class Solution {
public:
    int trap(vector<int>& height) {
        
	int ans =0, lo =0, hi = height.size()-1, loMax=height[0], hiMax = height[hi];

	while(lo <hi){
		if(height[lo] <height[hi]){
			if(loMax <= height[lo]){
				loMax = height[lo];
			}
			else{
			  ans += loMax - height[lo];
		  }
      lo++;
    }
		else{
			if(hiMax <= height[hi]){
				hiMax = height[hi];
			}
			else{
			ans += hiMax - height[hi];
		  }
      hi--;
	  }
  }
  return ans;
  }
};