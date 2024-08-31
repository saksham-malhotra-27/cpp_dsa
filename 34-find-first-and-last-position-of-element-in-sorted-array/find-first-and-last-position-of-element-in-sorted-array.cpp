class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size(); //size of the array
        int low = 0, high = n - 1;
        // Perform the steps:
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                if(nums[mid]==target && ((mid!=0 && nums[mid]!=nums[mid-1]) || (mid==0))){
                    int i= mid;
                    int j= mid;
                    while(mid<nums.size() && nums[mid]==target){
                        j=mid;
                        mid++;
                    }
                    return {i,j};
                }
                else {
                    high = mid - 1;
                }
            }
            else low = mid + 1;
        }
        return {-1,-1};
        }
};