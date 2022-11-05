class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for (int i=0;i<n;i++){
            long long target3=target-nums[i];
            for (int j=i+1;j<n;j++){
                long long target2=target3-nums[j];
                int front=j+1;
                int back=n-1;
                while (front<back){
                    int sum=nums[front]+nums[back];
                    
                    if (sum<target2) front++;
                    else if (sum>target2) back--;
                    else{
                        vector<int> quadruple(4,0);
                        quadruple[0]=nums[i];
                        quadruple[1]=nums[j];
                        quadruple[2]=nums[front];
                        quadruple[3]=nums[back];
                        ans.push_back(quadruple);
                        
                        while (front<back && nums[front]==quadruple[2]) ++front;
                        
                         while (front<back && nums[back]==quadruple[3]) --back;
                    }
                }
                while (j+1<n && nums[j+1]==nums[j]) ++j;
            }
            while (i+1<n && nums[i+1]==nums[i]) ++i;
        }
        return ans;
    }
};