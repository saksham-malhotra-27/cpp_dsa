class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i=0;int j=0; 
        int bottom = matrix.size()-1;
        int top = 0;
        int right = matrix[0].size()-1;
        int left = 0;
        vector<int> v;
        while(left<=right && bottom>=top ){
            j=left;
            while(j<=right){
                v.push_back(matrix[top][j]);
                j++;
            }
            top++;
            i=top;
            while(i<=bottom){
                v.push_back(matrix[i][right]);
                i++;
            }
            right--;

            if (top <= bottom) {
                // Traverse from right to left
                for (int j = right; j >= left; j--) {
                    v.push_back(matrix[bottom][j]);
                }
                bottom--;  // Move up to the next row
            }

            // Check if there's still a column to process
            if (left <= right) {
                // Traverse from bottom to top
                for (int i = bottom; i >= top; i--) {
                    v.push_back(matrix[i][left]);
                }
                left++;  // Move right to the next column
            }      

        }
        return v;


    }
};