class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort (nums.begin(), nums.end());
        int temp=nums.size()-1;
        int lar=0;
        while (k != 0){
            lar=nums[temp];
            temp--;
            k--;
        }
        return lar;
    }
};