class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int low = 0, high = arr.size()-1;
        while(low < high){
            int mid = low + (high-low)/2;
            if( (mid == 0 && arr[mid] != arr[mid+1]) || (mid == arr.size()-1 && arr[mid]!= arr[mid+1]) || (arr[mid] != arr[mid-1] && arr[mid+1] != arr[mid]) ){
                return arr[mid];
            }
            if( mid % 2 != 0){
                if(arr[mid] == arr[mid-1]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            } else {
                if(arr[mid]==arr[mid+1]){
                    low = mid+ 1;
                } else {
                    high = mid -1 ; 
                }
            }
        }
        return arr[low];
    } 
};

/*
1,1,2,3,3,4,4,8,8
0 1 2 3 4 5 6 7 8 


*/