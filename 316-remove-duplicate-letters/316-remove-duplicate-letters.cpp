class Solution {
public:
    string removeDuplicateLetters(string s) {
        int cnt[26]; memset(cnt, 0, sizeof(cnt));
        int pos = 0, n = s.size();

        for (char c : s) ++cnt[c-'a'];
        for (int i=0; i<n; ++i) {
            if (s[i] < s[pos]) pos = i;
            if (--cnt[s[i]-'a'] == 0) break;
        }
        
        string str = s.substr(pos);
        str.erase(remove(str.begin(), str.end(), s[pos]), str.end());
        return n == 0 ? "" : s[pos] + removeDuplicateLetters(str);
    }
};
