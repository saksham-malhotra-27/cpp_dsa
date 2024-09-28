class Solution {
public:
    void subseq(vector<int>& nums, int i, vector<int>& v, set<vector<int>>& ans) {
        if (i == nums.size()) {
            if (v.size() >= 2) {
                ans.insert(v);  // This works fine as is
            }
            return ; 
        }
        set<vector<int>> a,b;
        if (v.empty() || nums[i] >= v.back()) {
            v.push_back(nums[i]); 
           subseq(nums, i + 1, v, ans); 
            v.pop_back();
        }

        subseq(nums, i + 1, v, ans); 
        return ;
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> st; 
        vector<int> v;
         subseq(nums, 0, v, st); 
        vector<vector<int>> result(st.begin(), st.end());
        return result;
    }
};
