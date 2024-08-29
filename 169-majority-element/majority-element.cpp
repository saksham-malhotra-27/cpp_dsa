class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1 ; 
        int ele = nums[0];
        for(auto i: nums){
            if(ele == i){
                cnt++;
            } else {
                if(cnt==1){
                    ele = i; 
                    cnt=1;
                }
                else {
                    cnt--;
                }
            }
        }
        return ele;
    }
};