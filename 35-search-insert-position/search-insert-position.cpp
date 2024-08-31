class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target) {
                return mid; // Target found, return the index
            } else if (nums[mid] < target) {
                low = mid + 1; // Target must be in the right half
            } else {
                high = mid - 1; // Target must be in the left half
            }
        }
        
        // If not found, low will be the correct insertion point
        return high+1;
    }
};
