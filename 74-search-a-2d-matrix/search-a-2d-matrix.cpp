class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int low = 0, high = (matrix.size() * matrix[0].size()) - 1;

        int rowsize = matrix.size();
        int colsize = matrix[0].size();

        while (low <= high) {
            int mid = low + (high - low) / 2;
            // why this row and col is calculated like this 
            int row = mid / colsize;
            int col = mid % colsize;
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return false;
    }
};
