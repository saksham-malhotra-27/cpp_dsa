class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0; int high = nums.size()-1; 
        int res = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2; 
            int m = min(nums[low], nums[high]);
            m = min(m, nums[mid]);
            res = min(res, m);
            if(nums[low]<=nums[mid]){
               // asc low to mid 
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
};