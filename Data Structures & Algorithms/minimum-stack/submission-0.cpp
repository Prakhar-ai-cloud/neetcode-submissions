class MinStack {
    vector<int> st1;
    vector<int> st2;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st1.push_back(val);
        if(st2.empty()||val<=st2.back()) st2.push_back(val);
    }
    
    void pop() {
        if(st1.back()==st2.back()) st2.pop_back();
        st1.pop_back();
    }
    
    int top() {
        return st1.back();
    }
    
    int getMin() {
        return st2.back();
    }
};
