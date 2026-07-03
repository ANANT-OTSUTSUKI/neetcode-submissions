class MinStack {
    vector<int> arr,mins;
    int ind;
public:
    MinStack() {
        arr={};mins={};
        ind=-1;
    }
    
    void push(int val) {
        arr.push_back(val);
        ind++;
        if(ind==0) mins.push_back(val);
        else mins.push_back(min(mins[ind-1],val));
    }
    
    void pop() {
        arr.pop_back();
        mins.pop_back();
        ind--;
    }
    
    int top() {
        return arr[ind];
    }
    
    int getMin() {
        return mins[ind];
    }
};
