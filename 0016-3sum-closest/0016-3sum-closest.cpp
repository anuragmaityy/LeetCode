class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0, diff=INT_MAX;  
        for (int i=0;i<n;i++){
            int f=nums[i], s=i+1, e=n-1;
            while (s<e){
                if (f+nums[s]+nums[e]==target)
                    return target;
                else if (abs(f+nums[s]+nums[e]-target)<diff){
                    diff=abs(f+nums[s]+nums[e]-target);
                    ans=f+nums[s]+nums[e];
                }
                if (f+nums[s]+nums[e]>target)
                    e--;
                else
                    s++;
            } 
        }
        return ans;
    }
};