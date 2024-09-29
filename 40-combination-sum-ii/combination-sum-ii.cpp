class Solution {
public:
    void combination(vector<int> & candidates, int target, long long i, set<vector<int>> & ans, vector<int> & curr, int sum){
        if( i >= candidates.size()){
            if(sum == target)
            {
                ans.insert(curr);
            }
            return;
        }
        curr.push_back(candidates[i]);
        if(sum+candidates[i] <= target)
             {  
            combination(candidates, target, i+1, ans, curr, sum + candidates[i]);
             }
        curr.pop_back(); i++;
        while (i < candidates.size() && candidates[i] == candidates[i - 1]) {
            i++;
        }
        combination(candidates,target, i, ans, curr, sum);

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        combination(candidates, target, 0, ans, v, 0);
        vector<vector<int>> result(ans.begin(), ans.end());
        return result;
    }

};