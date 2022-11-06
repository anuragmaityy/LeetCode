class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        getParenthesis(ans,n,n,"");
        return ans;
    }
    
    void getParenthesis(vector<string> &ans, int open, int close, string curr){
        if (!close){
            ans.push_back(curr);
            return;
        }
        if (open>0) getParenthesis(ans, open-1, close, curr+"(");
        if (close>open) getParenthesis(ans, open, close-1, curr+")");
    }
};