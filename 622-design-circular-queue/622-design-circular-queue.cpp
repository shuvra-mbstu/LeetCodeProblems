class MyCircularQueue {
public:
 
  
    MyCircularQueue(int k) {
      mxSize=k;
      arr.resize(k);
    }
    
    bool enQueue(int value) {
        if(size==mxSize) return false;
  
      rear = (rear+1) % mxSize;
      
      arr[rear]=value;
      size++;
      
      return true;
    }
    
    bool deQueue() {
        if(size==0) return false;
      
      size--;
  
      front = (front+1) % mxSize;
            
      return true;
    }
    
    int Front() {
        return size==0 ? -1 : arr[front];
    }
    
    int Rear() {
        return size==0 ? -1 : arr[rear];
    }
    
    bool isEmpty() {
        return size == 0 ? true : false;
    }
    
    bool isFull() {
      return size == mxSize ? true : false;
    }
  
  private:
   vector<int> arr;
  int front =0, rear=-1, size=0, mxSize=0;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */