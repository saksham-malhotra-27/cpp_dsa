class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0; int j=nums.size()-1; 
        if(nums.size()==1) return nums[0];
        while(i<nums.size()){
            int mid = i + (j-i)/2;
            if((mid==0 && nums[mid]!=nums[mid+1]) || (mid==nums.size()-1 && nums[mid]!=nums[mid-1]) || (nums[mid]!=nums     [mid-1] && nums[mid]!=nums[mid+1]) )
            { return nums[mid]; }
            if(mid%2 == 0 ){
                // even place 
                
                if(mid<nums.size()-1 && nums[mid+1]==nums[mid]){
                    i=mid+1;
                }
                else {
                    j=mid-1;
                }
            } else { 
                // odd place 
                if(mid<nums.size()-1 && nums[mid+1]!=nums[mid]){
                    i = mid+1;
                } else {
                    j = mid-1;
                }
            }
        }
        return -1;
    }
};