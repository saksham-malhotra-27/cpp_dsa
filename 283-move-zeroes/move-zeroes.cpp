class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=1){
            return;
        }
        int i = 0; int j=1;
        while(j<nums.size() && nums[j]==0){
         j++;
        }
        while(j< nums.size()){
            if(nums[i]==0){
                swap(nums[i], nums[j]);
            }
            i++;  j = j>i? j:j+1; 
            while(j<nums.size() && nums[j]==0){
                 j++;
            }
        }
    }
};