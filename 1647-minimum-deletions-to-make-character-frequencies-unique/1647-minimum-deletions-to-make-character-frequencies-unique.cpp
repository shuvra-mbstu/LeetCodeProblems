class Solution {
public:
//     int minDeletions(string s) {
  
//       int deletion = 0;
//       vector<int> vt(30, 0);

//       int len = s.size();
//       int unused_frequency = len;

//       for(int i=0; i<len; i++){
//         vt[s[i]-'a']+=1;
//         // cout<<unused_frequency<<" "<<vt[s[i]-'a']<<" "<<s[i]-'a'<<endl;

//         // unused_frequency = max(unused_frequency, vt[s[i]-'a']);
//       }
//       sort(vt.begin(), vt.end(), greater<int>());


//       for(int i=25; i>=0; i--){
//                         cout<<unused_frequency<<" "<<vt[i]<<endl;

//         if(vt[i]==0)break;

//         unused_frequency = min(unused_frequency, vt[i]);
//         deletion += (vt[i] - unused_frequency);
        
//         if(unused_frequency>0)unused_frequency--;
//         }
      
//       return deletion;
//     }
// };

int minDeletions(string s) {
    int cnt[26] = {}, res = 0;
    for (char ch : s)
        ++cnt[ch - 'a'];
    sort(begin(cnt), end(cnt));
    for (int i = 24; i >= 0 && cnt[i] > 0; --i) {
        res += max(0, cnt[i] - max(0, cnt[i + 1] - 1));
        cnt[i] = min(cnt[i], max(0, cnt[i + 1] - 1));
    }
    return res;
}
};