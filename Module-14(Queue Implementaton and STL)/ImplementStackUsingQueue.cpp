class MyStack {
public:
    queue <int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue <int> newQ;
        int lastVal;
        while(!q.empty())
        {
            int k = q.front();
            q.pop();
            if(q.empty())
            {
                //last element
                lastVal = k;
                break;
            }
            newQ.push(k);
        }
        q = newQ;
        return lastVal;
    }
    
    int top() {
        queue<int> newQ;
        int lastVal;
        while(!q.empty())
        {
            int k = q.front();
            q.pop();
            if(q.empty())
            {
                //last element
                lastVal = k;
                
            }
            newQ.push(k);
        }
        q = newQ;
        return lastVal;
    }
    
    bool empty() {
        return q.empty();
    }
};