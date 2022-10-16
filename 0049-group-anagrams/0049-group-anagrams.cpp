class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>> anagrams;
        unordered_map<string, vector<string>> anagram_map;
      
      int len = strs.size();
      
      for(int i=0; i<len; i++){
        string ss = strs[i];
        sort(ss.begin(), ss.end());
        
        anagram_map[ss].push_back(strs[i]);
      }
      
      for(auto i : anagram_map){
        anagrams.push_back(i.second);
        // cout<<i.first<<endl;
      }
      return anagrams;
    }
};