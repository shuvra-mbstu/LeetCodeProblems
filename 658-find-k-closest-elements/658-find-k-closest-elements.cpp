class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      int hi = lower_bound(arr.begin(), arr.end(), x)- arr.begin();
      vector<int> ans;
            
      int lo = hi-1;
      
      // cout<<lo<<" "<<hi<<endl;
      while(k>0 && lo>=0 && hi <arr.size() && hi!=0 && lo!=arr.size()-1){
        if (abs(arr[lo] - x)<= abs(arr[hi]-x)){
          ans.push_back(arr[lo]);
          lo--;
        }
        else{
          ans.push_back(arr[hi]);
          hi++;
          // cout<<arr[hi]<<" hi "<<endl;
        }
        k--;
      }
      while(k>0 && lo>=0){
        ans.push_back(arr[lo--]);
        k--;
        // cout<<lo<<endl;
      }
                  
      while(k>0 && hi<arr.size()){
        ans.push_back(arr[hi++]);
        k--;
      }

      sort(ans.begin(), ans.end());
      return ans;
      
    }
};