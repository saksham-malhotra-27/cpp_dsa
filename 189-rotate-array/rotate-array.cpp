#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i=0; int j = k % nums.size(); int l = nums.size();
        reverse(nums.begin(), nums.end()-j);
        reverse( nums.end()-j, nums.end());
        reverse(nums.begin(), nums.end());
    }
};