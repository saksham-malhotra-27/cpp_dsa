class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3) return 0;
        sort(nums.begin(), nums.end()); 
        int cnt =0;
        for(int i=2; i<nums.size() ; i++){
            int j=0, k=i-1; 
            while(j<k){
                if(nums[i] >= (nums[j]+nums[k])) j++;
                else {
                    cnt+= k-j; 
                    k--; 
                }
            }
        }
        return cnt;
    }
};