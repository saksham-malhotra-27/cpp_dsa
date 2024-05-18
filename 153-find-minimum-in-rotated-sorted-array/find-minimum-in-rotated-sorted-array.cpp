class Solution {
public:
    int findMin(vector<int>& nums) {
        /*
        note we cannot use the approach of identifying sorted and moving towards it as what if the min element is present in the other unsorted half ?
        */
        int mn = INT_MAX;
        int start=0; int end= nums.size()-1; 
        while(start<=end){
            int mid = start + (end-start)/2;
            // already sorted
            if (nums[start] <= nums[end]) {
            mn = min(mn, nums[start]);
            break;
        }
            if(nums[start]<=nums[mid]){
                //left sorted 
                mn = min(nums[start],mn);
                start=mid+1;
            }
            else{
               //right sorted 
               mn = min(nums[mid],mn);
               end=mid-1;

            }
        }
        return mn;
    }
};