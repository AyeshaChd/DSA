class MinStack {
    private:
    stack<int>mainstk;
    stack<int>minstk;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        mainstk.push(value);
        if(minstk.empty()|| minstk.top()>= value)
        {
            minstk.push(value);
        }
    }
    
    void pop() {

        if(mainstk.top()==minstk.top())
        {
            minstk.pop();
        }
       mainstk.pop();
    }
    
    int top() {
      return  mainstk.top();
    }
    
    int getMin() {
        
          return minstk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */