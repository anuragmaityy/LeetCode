class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int idx=0;
        if (s.size()==0){
            return true;
        }
        while (idx<s.size()){
            if (s[idx]=='(' || s[idx]=='{' || s[idx]=='['){
                st.push(s[idx]);
            }
            else if(s[idx]==')' && !st.empty() && st.top()=='(' ||
                    s[idx]=='}' && !st.empty() && st.top()=='{' ||
                    s[idx]==']' && !st.empty() && st.top()=='[') 
            {
                st.pop();
            }
            else{
                return false;
            }
            idx++;
        }
        if (st.empty()){
            return true;
        }
        return false;
    }
};