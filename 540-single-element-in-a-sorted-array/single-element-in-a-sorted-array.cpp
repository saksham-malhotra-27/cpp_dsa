class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return nums[0];
    if(nums[0]!=nums[1]) return nums[0];
    if(nums[n-1]!=nums[n-2]) return nums[n-1];
    int start = 1 , end = n-2; int  mid=0;
    //1,1,2,2,3,4,4,8,8]
    //0 1 2 3 4 5 6 7 8 
    while( start <= end){
        int mid =  start + (end-start)/2;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        else if((mid % 2 == 0 && nums[mid+1]==nums[mid] )|| (mid%2!=0 && nums[mid]==nums[mid-1])){
            start = mid+1;
        }
        else if ((mid %2 == 0 && nums[mid+1]!= nums[mid]) || (mid%2!=0 && nums[mid]!=nums[mid-1])){
            end = mid-1;
        }
    
    } 
    return -1;
    }
};

/*
1,1,2,3,3,4,4,8,8
0 1 2 3 4 5 6 7 8 


*/