class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        
        if(len1 != len2) return false;
        
        vector<int> v1(26, 0), v2(26, 0);
        
        set<char> s1, s2;
        for(int i=0; i<len1; i++){
            v1[word1[i] - 'a'] ++;
            s1.insert(word1[i]);
        }
        
        for(int i=0; i<len2; i++){
            v2[word2[i] - 'a'] ++;
                        s2.insert(word2[i]);

        }

        
        if(s1!=s2) return false;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

//         for(auto i: v1) cout<<i;
        
//         cout<<endl;
//                 for(auto i: v2) cout<<i;

        if(v1!=v2) return false;
        
        return true;
    }
};