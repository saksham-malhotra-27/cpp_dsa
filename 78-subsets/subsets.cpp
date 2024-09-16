class Solution {
public:
    vector<vector<int>> v;
    void subsetsre(vector<int>& nums, int i, vector<int> v2){
        if(i>=nums.size()){
            v.push_back(v2); return;
        }
        v2.push_back(nums[i]);
        subsetsre(nums, i+1, v2);
        v2.pop_back();
        subsetsre(nums, i+1, v2);
        //v.push_back(v2);
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        subsetsre(nums, 0, {});
        return v;
    }
};