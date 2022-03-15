class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans = "";
        stack<int> st;
        int n = s.size();
        int i=0;
        while(i < n) {
            if(s[i] == '(') {
                st.push(i);
            } else if(s[i] == ')') {
                if(st.empty()) {
                    s[i] = '#';
                } else {
                    st.pop();
                }
            }
            i++;
        }
        while(!st.empty()) {
            s[st.top()] = '#';
            st.pop();
        }
        i = 0;
        while(i<n) {
            if(s[i] != '#') {
                ans += s[i];
            }
            i++;
        }
        return ans;
    }
};