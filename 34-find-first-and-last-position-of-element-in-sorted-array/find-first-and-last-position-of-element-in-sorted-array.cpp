class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v;  int start = 0 , end = nums.size()-1; 
         int ans1=-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                ans1 = mid; end = mid-1;
            }
            else if(nums[mid]>target){
                end = mid -1;
            }
            else {
                start = mid+1 ; 
            }
        }
        if(ans1==-1){return {-1,-1};}
        start = 0 , end = nums.size()-1;  int ans2=0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                ans2 = mid; start=mid+1;
            }
            else if(nums[mid]>target){
                end = mid -1;
            }
            else {
                start = mid+1 ; 
            }
        }
        if(ans1==ans2){ v.push_back(ans1);v.push_back(ans1); return v;}
        v.push_back(ans1); v.push_back(ans2);
        return v;
    }
};