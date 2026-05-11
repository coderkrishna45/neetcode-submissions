class MinStack {
public:
    MinStack() {
        
    }
    list<pair<int,int>>s;
    void push(int val) {
        if(s.empty()){
            s.push_front({val,val});
        }else{
            s.push_front({val,min(val,s.front().second)});
        }
    }
    
    void pop() {
        s.pop_front();
    }
    
    int top() {
        return s.front().first;
    }
    
    int getMin() {
        return s.front().second;
    }
};
