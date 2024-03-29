class Solution {
public:
    vector<int> temp;
    void solve(int target,vector<int> &candidates,vector<vector<int>> &ans,int index)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return ;
        }

        for(int i=index;i<candidates.size();i++)
        {
            temp.push_back(candidates[i]);
            if(target-candidates[i]>=0)
               solve(target-candidates[i],candidates,ans,i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        solve(target,candidates,ans,0);
        return ans;
    }
};