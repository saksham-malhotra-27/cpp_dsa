class Solution {
public:
    vector<vector<int>> subsetsre(vector<int>& nums, int i, vector<int> v, vector<vector<int>> ans){
        if(i==nums.size()){
            ans.push_back(v);
            return ans;
        }
        v.push_back(nums[i]);
        auto a = subsetsre(nums, i+1, v, ans);
        v.pop_back();
        auto b = subsetsre(nums,i+1, v, ans);
        a.insert(a.end(), b.begin(), b.end());
        return a;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        return subsetsre(nums, 0, {}, {});

    }
};