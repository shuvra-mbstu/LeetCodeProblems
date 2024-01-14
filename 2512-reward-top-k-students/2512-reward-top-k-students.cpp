bool cmp(const pair<int,int> &a, const pair<int, int> &b){
    if(a.first==b.first) return a.second<b.second;

    return a.first>b.first;
}

class Solution {
public:

    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        
        unordered_map<string, int> feedbacks;
        
        for(auto p : positive_feedback){ feedbacks[p]= 3; }
        
        for(auto p : negative_feedback){ feedbacks[p]= -1; }
        
        vector<pair<int, int>> students;
        
        int len = report.size();
        
        for(int i=0; i<len; i++){
            
            stringstream ss(report[i]);
            
            string s;
            int score =0;
            
            while(ss>>s){ score += feedbacks[s]; }

            students.push_back({score, student_id[i]});
        }
        sort(students.begin(), students.end(), cmp);
        vector<int> res;
        
        for(int i=0; i<k; i++){
            res.push_back(students[i].second);
        }
        return res;
    }
};