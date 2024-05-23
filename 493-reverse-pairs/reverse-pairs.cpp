class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergesort(nums, 0 , nums.size()-1);
    }

    int mergesort (vector<int>& nums, int low, int high){
        int cnt=0;
        if(low>=high) return cnt;
        int mid = low + (high-low)/2;
        cnt+= mergesort(nums, low, mid);
        cnt+= mergesort(nums, mid+1, high);
        cnt+= totalCounts(nums, low, mid, high);
        merge(nums, low, mid, high);
        return cnt;
    }


void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

    int totalCounts(vector<int>&nums, int low, int mid, int high){
        int right = mid+1; int cnt = 0;
         for(int i=low; i<=mid; i++){
            while(right<=high && 0.5*nums[i]>nums[right]){
                //1 2 2 3 1 3 4 5

              right++;
            }
            cnt+= (right-(mid+1));
         }
         return cnt;
         }
};