class CustomStack {
public:
    vector<int> v;
    int siz;
    CustomStack(int maxSize) {
        siz=maxSize;
    }
    
    void push(int x) {
        if(v.size()<siz)
            v.push_back(x);
    }
    
    int pop() {
        int ans=-1;
        if(v.size()>0){
            int ans=v[v.size()-1];
            v.pop_back();
            return ans;
        }
         else   
            return ans;
    }
    
    void increment(int k, int val) {
    
        int temp=v.size();
        for(int i=0;i< min(k,temp);i++){
            v[i]+=val;
        }
    }

};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */