
int NoOfSubArrays(vector<int>& arr, int mid){
    int cnt=1; long long presum=0;
    for(int i=0; i<arr.size();i++){
        if(presum+arr[i]<= mid){
            presum+= arr[i];
        }else {
            cnt++;
            presum=arr[i];
        }
    }
    return cnt;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end() );
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid = low + (high-low)/2;
            if(NoOfSubArrays(nums, mid)>k){
                low = mid + 1;
            } else {
                high = mid - 1; // decrease sum 
            }
        }
        return low;
    }
};
