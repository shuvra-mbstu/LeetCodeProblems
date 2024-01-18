/*
Important to note:
1) Here we use Map in Node as to unordered_map. This is due to the fact that when you will
	run dfs or serialize on the subfolders althrough they have exact same folder structure. 
	The key in the duplicates map might be different when you use unordered_map.
2) It is very important to define the structure of root->child i.e. by adding ( and ) as necessary
	as different folder structure might also lead to same keys in duplicates again causing
	problems.
*/
struct Node {
    map<string, Node*> child;
    bool toDelete = false;
};

class Solution {
    unordered_map<string, vector<Node*>> duplicates;
    vector<vector<string>> ans;
public:
    string dfs(Node* root) {
        string currValue = "";
        if (root->child.size() > 0) {
            currValue += "(";
        } else {
            return "";
        }
        for (auto& child : root->child) {
            currValue += child.first + dfs(child.second);
        }
        currValue += ")";
        
        if (currValue != "") {
            duplicates[currValue].push_back(root);
        }
        
        return currValue;
    }
    
    void insert(Node* root, vector<string>& path, int i) {
        if (i >= path.size()) return;
        if (root->child.find(path[i]) == root->child.end()) {
            root->child[path[i]] = new Node();
        }
        insert(root->child[path[i]], path, i + 1);
    }
    
    void removeUnwantedNodes(Node* root, vector<string>& temp) {
        if (root->toDelete) return;
        for(auto& child : root->child) {
            temp.push_back(child.first);
            removeUnwantedNodes(child.second, temp);
            temp.pop_back();
        }
        if (temp.size() > 0) {
            ans.push_back(temp);
        }
    }
    
    vector<vector<string>> deleteDuplicateFolder(vector<vector<string>>& paths) {
        Node* root = new Node();
        for (auto& path : paths) {
            insert(root, path, 0);
        }
        dfs(root);
        
        for (auto& dup : duplicates) {
            if (dup.second.size() > 1) {
                for (auto& node : dup.second) {
                    node->toDelete = true;
                }
            }
        }
        
        vector<string> temp;
        removeUnwantedNodes(root, temp);
        
        return ans;
    }
};