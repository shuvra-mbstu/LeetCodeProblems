class Solution {
public:
    
    void f(int i,vector<string>&arr,vector<int>freq,int len,int &maxLen){
        if(i == arr.size()){
            maxLen = max(maxLen,len);
            return;
        }
        int signal = 0;
        vector<int>freq1 = freq;
        for(int j = 0;j < arr[i].length();j++){
            if(freq1[arr[i][j]-'a'] == 1){
                signal = 1;
                break;
            }
            freq1[arr[i][j]-'a']++;   
        }
        if(signal == 0){
            cout << "Word taken: " << arr[i] << endl;
            f(i+1,arr,freq1,len+arr[i].length(),maxLen);
            // cout << "Funtion returned" << endl;
        }
        f(i+1,arr,freq,len,maxLen);
        for(int i = 0;i < 26;i++){
            
        }
    }
    
    int maxLength(vector<string>& arr) {
        int maxLen = 0,len = 0;
        vector<int>freq(26,0);
        f(0,arr,freq,len,maxLen);
        return maxLen;
    }
};