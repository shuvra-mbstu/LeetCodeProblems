class Solution {
public:
    int calPoints(vector<string>& ops) {
        int num1=0, num2=0, coun=0;
        
        stack<int> stk;
        int len = ops.size();
        
        for(auto &i:ops){
            if(i=="C"){
                stk.pop();
            }
            else if(i=="D"){
                int val = stk.top();
                stk.push(val*2);
            }
            else if(i=="+"){
                int val1 = stk.top();
                stk.pop();
                int val2 = stk.top();
                stk.push(val1);
                stk.push(val1+val2);
            }
            else{
                stk.push(stoi(i));
            }
        }
        while(!stk.empty()){
            coun += stk.top();
            stk.pop();
        }
        return coun;
    }
};