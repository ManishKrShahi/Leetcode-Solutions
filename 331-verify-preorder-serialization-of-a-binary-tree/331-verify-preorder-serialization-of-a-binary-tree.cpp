class Solution {
public:
    bool isValidSerialization(string preorder) {
         stack<string> s;
        int i;
        istringstream ss(preorder);
        string temp;
        vector<string> vec; 
        while(getline(ss, temp, ','))      
           vec.push_back(temp);  
        s.push(vec[0]);
        i=1;
       while(i<vec.size()){
           while(s.size()>=1 && s.top()=="#" && vec[i]=="#"){
               if(s.size()==1)    
                   return false;
               if(s.size()>=2){
               s.pop();
               s.pop();
               }
           }
           s.push(vec[i]);     
           i++;
       }
       if(s.size()==1 && s.top()=="#")  
           return true;
        return false;
    }
    
};