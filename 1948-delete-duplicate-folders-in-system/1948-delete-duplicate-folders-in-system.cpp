struct Node {
    map<string, Node*> child;
    bool toBeDeleted = false;
};


class Solution {
    unordered_map<string, vector<Node*>> duplicates;
    vector<vector<string>> result;
    
void add_node(Node* &root, vector<string> &path, int i){
    if(i>=path.size()) return;
    
    if(root->child.find(path[i]) == root->child.end()){
        root->child[path[i]] = new Node();
        // cout<<path[i]<<endl;
    }
    add_node(root->child[path[i]], path, i+1);
  }
    string dfs(Node* &root){
        if(root->child.size() == 0) return "";

        string currValue = "";
        
        for(auto childNode : root->child){
            currValue += '(' + childNode.first + dfs(childNode.second);
        }
         currValue += ')';
        
        if(currValue != "") {
            duplicates[currValue].push_back(root);
        }
            
        return currValue;
    }
    
    
    void removeUnwantedNode(Node* &root, vector<string> & temp){
        if(root->toBeDeleted) return;
        
        for(auto child : root->child){
            temp.push_back(child.first);
            removeUnwantedNode(child.second, temp);
            // cout<<child.first<<endl;
            temp.pop_back();
        }
        if(temp.size()>0)result.push_back(temp);
    }

public:
    
    vector<vector<string>> deleteDuplicateFolder(vector<vector<string>>& paths) {
        Node* root = new Node();
        
        for(auto path : paths){
            add_node(root, path, 0);
        }
        
        dfs(root);
        
        for(auto dup : duplicates){
            if(dup.second.size()>1){
                for(auto &node: dup.second){
                    node->toBeDeleted = true;
                }
            }
        }
        vector<string> temp;
        removeUnwantedNode(root, temp);
        
        return result;
    }
};
    