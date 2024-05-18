class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX, ns, j,k;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
           if(i!=0 && nums[i]==nums[i-1]){ continue; }
           j=i+1; k=nums.size()-1;
           while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(diff> abs(target-sum)){
              ns = sum;
              diff = abs(target-sum);
              /*j++; k--;
              while(j<k && nums[j] == nums[j-1]) j++;
              while(j<k && nums[k] == nums[k+1]) k--; 
              continue;*/
            }
            if(target>sum){
                j++;
            }
            else{
                k--;
            }

           }
        }

        return ns;

    }
};