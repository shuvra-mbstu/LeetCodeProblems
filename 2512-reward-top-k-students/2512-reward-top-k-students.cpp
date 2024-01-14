bool cmp (const pair<int, int> &a, pair<int, int> &b){
    if(a.first==b.first) return a.second<b.second;
    
    return a.first>b.first;
}

class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        unordered_map<string, int> feedbacks;
        
        for(auto pf : positive_feedback){ feedbacks[pf]= 3; }
        for(auto nf : negative_feedback){ feedbacks[nf]= -1; }
        
        int len = report.size();
        vector<pair<int, int>> students_info;
        
        // cout<<len<<endl;
        for(int i=0; i<len; i++){
            
            // cout<<report[i]<<endl;
           stringstream ss(report[i]);
            
            int count=0;
            string s;
            
            while(ss>>s){ 
                // cout<<s<<endl;
                count += feedbacks[s]; }
            
            // cout<<count<<" "<<student_id[i]<<endl;
            students_info.push_back({count, student_id[i]});
        }
        
        sort(students_info.begin(), students_info.end(), cmp);
        
        vector<int> result;
        
        for(int i=0; i<k; i++){
           result.push_back(students_info[i].second); 
        }
        
        return result;
    }
};