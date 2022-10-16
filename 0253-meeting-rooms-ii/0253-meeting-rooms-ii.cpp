class Solution {
public:
  
  static bool compare(vector<int>& a, vector<int>& b){
    if(a[0]==b[0])return a[1]<b[1];
    
    return a[0]<b[0];
  }
    int minMeetingRooms(vector<vector<int>>& intervals) {
      sort(intervals.begin(), intervals.end());
      int len = intervals.size();
      int count =1;
    priority_queue<int, vector<int>, std::greater<int>> priority;
      
      priority.push(intervals[0][1]);
      
      for(int i=1; i<len; i++){
          if(priority.top() <= intervals[i][0]){
            priority.pop();
          }
        priority.push(intervals[i][1]);
        
        count = max(count,(int)priority.size());

      }
      return count;
    }
};