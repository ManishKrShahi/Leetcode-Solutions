class Solution {
public:
    bool isValid(string s) {
        stack<char> st;   
        for(auto it:s)  
        {
            if(it=='(' || it=='{' || it=='[') st.push(it); 
            else  
            {
                if(st.empty() || (st.top()=='(' and it!=')') || (st.top()=='{' and it!='}') || (st.top()=='[' and it!=']')) 
                    return false;
                st.pop();  
            }
        }
        return st.empty();  
    }

};