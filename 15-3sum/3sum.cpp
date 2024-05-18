class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n = nums.size();
       int i=0; int j,k;
       vector <vector<int>>  v;
       sort(nums.begin(), nums.end());
       // -4 -1 -1 0 1 2 
       while(i<n){
        // we have to see arr[i], 
        if(i!=0 && nums[i]==nums[i-1]){
           i++; continue;
        }
        
        j=i+1; k=n-1;
        while(j<k){
        int sum = nums[i]+nums[j]+nums[k];
        if(sum > 0 ){
           k--;
        }
        else if(sum<0){
           j++;
        }
        else {
           vector<int> temp;
           temp.push_back(nums[i]);
           temp.push_back(nums[j]);
           temp.push_back(nums[k]);
           v.push_back(temp);
           j++; k--; 
           while(j<k && nums[j] == nums[j-1]) j++;
           while(j<k && nums[k] == nums[k+1]) k--;
        }
        }
        i++;
       }
       return v;

    }
};