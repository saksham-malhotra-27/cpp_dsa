using namespace std;
long reqTime(vector<int>& nums, int k){
   long long sum=0;
   for(int i=0; i<nums.size(); i++){
    sum+=ceil((double)nums[i]/ (double)k);
   }
   return sum;

}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // 4 11 20 23 30 
        int max= INT_MIN;
        for(int i=0; i<piles.size(); i++){
            if(max<piles[i]){
                max = piles[i];
            }
        }
        // range is from 1 to the max 
        int low=1; int high=max; int mid;
        long long minTime = INT_MAX;
        // can't use it because if we do , then we may delete the possibilties
        while(low<=high){
             mid = low + (high-low)/2;
             long long t = reqTime(piles,mid);
             if(t<=h){
                high=mid-1;
             }
             else{
                low=mid+1;
             }
        }
        return low;
        // 1 2 3 4 5 6 7 8 9 10 11   8 
    }
};