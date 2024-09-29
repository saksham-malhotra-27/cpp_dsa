class Solution {
public:
    void subseq(vector<int>& nums, long long i, vector<int>& v, set<vector<int>>& ans) {
        if (i >= nums.size()) {
            if (v.size() >= 2) {
                ans.insert(v);  
            }
            return ; 
        }
        
        
        if (v.empty() || nums[i] >= v.back()) {
            v.push_back(nums[i]); 
            subseq(nums, i + 1, v, ans); 
            v.pop_back();
        } 
        i++;
        while((i == 0 )|| ( i<nums.size() && nums[i]==nums[i-1])){
            i++;
        }
        subseq(nums, i, v, ans); 
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
