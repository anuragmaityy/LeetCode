class Solution {
public:
vector<vector<int>>ans;
    void permutation(vector<int>&arr,int start){
        if(start==arr.size())
        ans.push_back(arr);

        for(int i=start;i<arr.size();i++){
              swap(arr[i],arr[start]);
              permutation(arr,start+1);
              swap(arr[i],arr[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& arr) {
        
        vector<int>temp;
        permutation(arr,0);
        return ans;
    }
};