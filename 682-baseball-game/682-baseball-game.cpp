class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        int x;
        int y;
        int ans = 0;
        stack<int>s;
        for(string i:ops){
            if(i == "C"){
                s.pop();
            }
            else if(i == "D"){
                s.push(s.top()*2);
            }
            else if(i == "+"){
                x = s.top();
                s.pop();
                y = s.top();
                s.push(x);
                s.push(x + y);
            }
            else{
                s.push(stoi(i));
            }
        }
        while(s.size() != 0){
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};