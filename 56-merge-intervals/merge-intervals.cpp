class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        int j=0;
        for(int i=1; i<intervals.size(); i++){
         int start = result[j][0];  int end = result[j][1];
         if(intervals[i][0]>result[j][1]){
            j++; 
            result.push_back(intervals[i]); continue;
         }
         if(intervals[i][0]>=result[j][0] && result[j][1]>=intervals[i][0]){
          result[j][1] = max(intervals[i][1], result[j][1]);
         }
         
        }
        return result;
    }
};