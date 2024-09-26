class Solution {
public:

    vector<vector<int>> subsets(vector<int> & nums, int i, vector<int> curr, vector<vector<int>> ans){
        if(i == nums.size()){
            ans.push_back(curr);
            return ans;
        }
        vector<vector<int>> a,b;
        curr.push_back(nums[i]);
        a = subsets(nums, i+1, curr, ans);
        curr.pop_back(); i++;
        while(i<nums.size() && nums[i] == nums[i-1]){
            i++;
        }
        b = subsets(nums, i, curr, ans);
        
        a.insert(a.end(), b.begin(), b.end());
        return a;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<vector<int>> ans;
        vector<int> curr;
        return subsets(nums, 0, curr, ans);

    }
};