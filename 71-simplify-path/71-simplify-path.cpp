class Solution {
public:
    string simplifyPath(string path) {
        string temp = "";
        stack<string> st;
        for(int i=0;i<path.length();i++){
            // If found the '/' means we have to push/pop from stack or do nothing
            if(path[i]=='/'){
                if(temp == ".."){
                    if(st.size()) st.pop();
                }
                else if(temp!="" && temp!=".") st.push(temp);
                temp = "";
                continue;
            }
            temp+=path[i];
        }
        
        
        // Check for last temporary string
        if(temp == ".."){
            if(st.size()) st.pop();
        }
        else if(temp!="" && temp!=".") st.push(temp);
        
        // Create string from the elements of stack
        temp = "";
        while(!st.empty()){
            temp = "/"+st.top()+temp;
            st.pop();
        }
        return temp==""?"/":temp;
    }
};