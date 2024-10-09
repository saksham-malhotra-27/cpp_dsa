class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;  // No need to jump if we're already at the end

        int jumps = 0;           // Count of jumps
        int current_end = 0;     // The farthest we can go with the current number of jumps
        int farthest = 0;        // The farthest we can reach overall

        for (int i = 0; i < nums.size(); i++) {
            // Update the farthest we can reach from index i
            farthest = max(farthest, i + nums[i]);

            // If we've reached the end of the current range
            if (i == current_end) {
                // We need to jump again, so increment the jump count
                jumps++;

                // If we can't move any further (i.e., we're stuck), return -1
                if (current_end == farthest && farthest < nums.size() - 1) {
                    return -1;  // We're stuck, can't reach the end
                }

                // Update the current range to the new farthest point
                current_end = farthest;

                // If we can reach the end of the array, we can stop
                if (current_end >= nums.size() - 1) {
                    break;
                }
            }
        }

        return jumps;
    }
};
