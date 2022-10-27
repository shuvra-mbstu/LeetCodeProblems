class LRUCache {
public:
    list<int> dq;
    map<int, list<int> :: iterator> mpp;
    int maxsize;
    map<int, int> res;

    LRUCache(int capacity) {
        maxsize = capacity;
    }
    
    int get(int key) {
        if(mpp.find(key)==mpp.end()) return -1;
        
        dq.erase(mpp[key]);
        dq.push_front(key);
        mpp[key]=dq.begin();
        
        return res[key];
    }
    
    void put(int key, int value) {
        
        if(mpp.find(key)==mpp.end()){
            if(dq.size()==maxsize){
                
                int last = dq.back();
                dq.pop_back();
                mpp.erase(last);
            }
        }
        else{
            dq.erase(mpp[key]);
        }
        
        dq.push_front(key);
        mpp[key] = dq.begin();
        res[key] = value;
    }
};



/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */