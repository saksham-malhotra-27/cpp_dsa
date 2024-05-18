class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0; int end= nums.size()-1; 
        int mid;

        while(start<=end){
            mid = start + (end-start)/2; 
            if(nums[mid]==target) return mid;
            if(nums[start]<=nums[mid] ){
                if(nums[mid]>target && target>=nums[start]){
                    end=mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            else {
                if(nums[end]>=target && target>nums[mid]){
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