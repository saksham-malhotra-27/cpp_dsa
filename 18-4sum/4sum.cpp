class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
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
        int d = i+1; 
        while(d<n){
        
        j=d+1; k=n-1;
        while(j<k){
        long long sum = nums[i];
        sum += nums[j];
        sum += nums[k];
        sum += nums[d];
        if(sum > target){
           k--;
        }
        else if(sum < target){
           j++;
        }
        else {
           vector<int> temp;
           temp.push_back(nums[i]);
           temp.push_back(nums[j]);
           temp.push_back(nums[k]);
           temp.push_back(nums[d]);
           v.push_back(temp);
           j++; k--; 
           while(j<k && nums[j] == nums[j-1]) j++;
           while(j<k && nums[k] == nums[k+1]) k--;
        }
        }
        d++;
        while(d<n && nums[d]==nums[d-1]) d++;
        }
        i++;
       }
       return v;
    }
};

