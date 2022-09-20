class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
            for(int i = 0; i < s.size(); i++){
                if(s[i] != ']')
                    st.push(s[i]);
                else{
                    string current_str = "";
                    while(st.top() != '['){
                        current_str = st.top() + current_str;
                        st.pop();
                    }
                    st.pop(); 
                    string number = "";
                    while(st.empty() == false && isdigit(st.top())){
                        number = st.top() + number;
                        st.pop();
                    }
                    int k_times = stoi(number);
                    while(k_times > 0){
                        for(int i = 0; i < current_str.size(); i++)
                            st.push(current_str[i]);
                        k_times--;
                    }
                }
            }
            s = "";
            while(st.empty() == false){
                s = st.top() + s;
                st.pop();
            }
            return s;
    }
};