
#include <bits/stdc++.h>
using namespace std;
bool passes(vector<int>& weights, int days, int mid){
    int cntD = 1;
    int sumW = 0;
    for(int i=0; i<weights.size(); i++){
            if(sumW + weights[i] <= mid){
                sumW += weights[i];
            }
            else {
                sumW = weights[i];
                cntD++;
            }
        }
    return cntD<=days;
    
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        // ith pack has weight weight[i] 
        // loading happen in order of i 
        // we maynot load more than max weight capacity of the ship 
        // return least weight capacity of the ship that will result in all the packages being shipped within days 
        // since we cannot put up the any weight>the least weight on board , so the low = mx
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low<=high){
            int mid= low + (high-low)/2;
            // passes all 
            if(passes(weights, days, mid)){
               high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;


    }
};