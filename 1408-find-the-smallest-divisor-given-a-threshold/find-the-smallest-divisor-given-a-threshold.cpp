bool ceilSum(vector<int> & nums, int divisor, int threshold){
    long long sum = 0; 
    for(int i=0; i<nums.size(); i++){
        sum+= ceil(((float)nums[i])/divisor);
    }
    return sum<=threshold;

}
class Solution {
public:
   
    int smallestDivisor(vector<int>& nums, int threshold) {
        // choose a divisor divide all array by it and sum the result
        int mn = 1, mx = nums[0];
        for(int i=1; i<nums.size(); i++){
            mx = max(mx, nums[i]);
        }

        while(mn<=mx){
            int divisor = mn + (mx-mn)/2;
            if(ceilSum(nums, divisor , threshold)){
              mx = divisor-1;
            } else {
              mn = divisor+1;
            }
        }

        return mn;
        

    }
};