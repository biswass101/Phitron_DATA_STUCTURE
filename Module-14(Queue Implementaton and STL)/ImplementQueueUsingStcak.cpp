class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> newST;
        int lastVal;
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            if(st.empty())
            {
                lastVal = k;
                break;
            }
            newST.push(k);
        }
        while(!newST.empty())
        {
            st.push(newST.top());
            newST.pop();
        }
        return lastVal;
    }
    
    int peek() {
        stack<int> newST;
        int lastVal;
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            if(st.empty())
            {
                lastVal = k;
                
            }
            newST.push(k);
        }
        while(!newST.empty())
        {
            st.push(newST.top());
            newST.pop();
        }
        return lastVal;
    }
    
    bool empty() {
        return st.empty();
    }
};