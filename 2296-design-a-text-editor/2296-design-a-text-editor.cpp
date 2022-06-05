class TextEditor {
public:    string s = "";
    int idx = 0;
    TextEditor() {
    }
    
    void addText(string text) {
         s.insert(idx, text);
        idx+=text.size();
    //    idx=idx+k;
    }
    
    int deleteText(int k) {
        int cnt=0;
        while(idx!=0 && cnt<k){
            s.erase(idx-1,1);
            idx--;
            cnt++;
        }
        return cnt;
    }
    
    string cursorLeft(int k) {
        if(k>=idx)
            idx=0;
        else
            idx-=k; 
         if(idx>=10)
            return s.substr(idx-10,10);
        
        
        return s.substr(0,idx);
        
    }
    
    string cursorRight(int k) {
        if(k+idx>=s.size())
            idx = s.size();
        else
            idx+=k; 
        if(idx>=10)
            return s.substr(idx-10,10);
        
        return s.substr(0,idx);
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */