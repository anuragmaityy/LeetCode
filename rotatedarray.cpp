class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Brute Force
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                return i;
            }
        }
        return -1;
        //Binary Search
        int start=0,end=nums.size()-1;
        int mid= (start+end)/2;
        while(start<=end){
            mid=(start+end)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(nums[start]<=nums[mid]){
                if(nums[start]<=target && nums[mid]>=target){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                if(nums[end]>=target && nums[mid]<=target){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};