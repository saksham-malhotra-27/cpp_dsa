class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0; int max= INT_MIN;
        for(int i=0; i< nums.size(); i++){
            if(sum<0){
                sum=0;
            }
            sum+= nums[i];
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
};