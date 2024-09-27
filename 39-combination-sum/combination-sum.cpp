class Solution {
public:

    vector<vector<int>> summ (vector<int>& candidates, int i, int target, vector<int> v,  int sum, vector<vector<int>> ans){
        if(sum>=target || i>= candidates.size()){
            if(sum==target) ans.push_back(v);
            return ans;
        }
        auto a = summ(candidates,i+1, target, v, sum, ans);
        v.push_back(candidates[i]);
        auto b = summ(candidates, i, target, v, sum + candidates[i], ans);
     //   auto c = summ(candidates, i+1, target, v, sum, ans);
        a.insert(a.end(), b.begin(), b.end());
       // a.insert(a.end(), c.begin(), c.end());
        return a;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        return summ(candidates, 0, target, {}, 0, {});
    }
};