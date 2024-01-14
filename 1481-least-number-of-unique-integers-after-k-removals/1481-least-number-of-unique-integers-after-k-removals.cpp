class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> mpp;
        vector<int> heap;

        int len = arr.size();
        
        if(k==len) return 0;
        
        for(int i=0; i<len; i++){
            mpp[arr[i]]++;
        }
        
        // sort(mpp.begin(), mpp.end());
        
        int count=0, num=0;
        for(auto &i : mpp){
            heap.push_back(i.second);
        }
        
        // sort(res.begin(), res.end());
        make_heap(begin(heap),end(heap), greater<int>());
        
        while(k>0){
            k -= heap.front();
            
                             pop_heap(begin(heap), end(heap), greater<int>()); 

            if(k>=0)heap.pop_back();
            
        }
            
            // cout<<count<<endl;
        return heap.size();
    }
};