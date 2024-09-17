class Solution {
public:
    int searching(vector<int>& nums, int target, int low, int high){
        if(low>high) return -1;

        int mid = low + (high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[low]<=nums[mid]){
            if(target>=nums[low] && target<nums[mid]){
                return searching(nums, target, low, mid-1);
            } else {
                return searching(nums,target,mid+1, high);
            }
        } else {
            if(nums[mid]<target && nums[high]>=target){
                return searching(nums, target, mid+1, high);
            } else {
                return searching(nums, target, low, mid-1);
            }
        }

    }

    int search(vector<int>& nums, int target) {
        return searching(nums, target, 0, nums.size()-1);
    }
};