class Solution {
public:
    struct comp{
        bool operator() ( pair<string, int>& a, pair<string, int>& b){
            if(a.second == b.second) return a.first <b.first;

            return a.second>b.second;
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> word_map;
        
        int len = words.size();
        
        for(int i=0; i<len; i++){
            word_map[words[i]]++;
        }
        
        priority_queue<pair<string, int>, vector<pair<string, int>>, comp> priority;
        
        for(auto x:word_map){
            priority.push({x.first, x.second});
            
            if(priority.size()>k)priority.pop();
        }
        vector<string> ans;
        
        while(!priority.empty()){
            ans.push_back(priority.top().first);
            priority.pop();
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
        
    
};