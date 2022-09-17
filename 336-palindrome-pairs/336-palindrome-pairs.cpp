class Solution {
    struct TrieNode{
        int index;
        vector<TrieNode*> child;
        vector<int> palPrefix;
        TrieNode(){
            index = -1;
            child.assign(26, nullptr);
        }
    };
    
    bool isRestPal(string& str, int idx){
        int l = str.size()-1;
        while(idx < l){
            if(str[idx] != str[l]) return false;
            idx++;
            l--;
        }
        return true;
    }
public:
    
    TrieNode* trie;
    vector<vector<int>> palindromePairs(vector<string>& words) {
        trie = new TrieNode();
        
        for(int idx = 0; idx < words.size(); idx++){
            string word = words[idx];
            reverse(word.begin(), word.end());
            
            TrieNode* node = trie;
            
            for(int i = 0; i < word.size(); i++){
                if(isRestPal(word, i)) node->palPrefix.push_back(idx);
                
                if(node->child[word[i] - 'a'] == nullptr) node->child[word[i] - 'a'] = new TrieNode();
                
                node = node->child[word[i] - 'a'];
            }
            node->index = idx;
        }
        
        
        vector<vector<int>> res;
        
        for(int idx = 0; idx < words.size(); idx++){
            string word = words[idx];
            
            TrieNode* node = trie;
            int i;
            for(i = 0; i < word.size(); i++){
                char c = word[i];
                
                if(node->index != -1) if(isRestPal(word, i)){
                    res.push_back({idx, node->index});
                    //cout << idx << " " << node->index << endl; 
                } 
                
                node = node->child[c - 'a'];
                
                if(node == nullptr) break;
            }
            if(node == nullptr) continue;
            
            if(node->index != -1 && node->index != idx){
                res.push_back({idx, node->index});
                //cout << idx << " " << node->index << endl; 
            }
            for(int n: node->palPrefix) res.push_back({idx, n});
        }
        
        return res;
    }
};