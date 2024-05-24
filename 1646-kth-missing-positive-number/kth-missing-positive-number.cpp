
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0; int high = arr.size()-1; int mid=0;
        while(low<=high){
            mid = low + (high-low)/2; 
            if( arr[mid]-(mid+1)<k ){
                low=mid+1;
            }
            else{
                high = mid-1;
            }

        }
        // high pointer points to the nearest smaller element than  kth missing 
        // number of missing elements after high = k- (arr[high]-(high+1))
        // kth element = arr[high]+ k - (arr[high]-(high+1)) = k+high+1
        return k+high+1;
    }
};