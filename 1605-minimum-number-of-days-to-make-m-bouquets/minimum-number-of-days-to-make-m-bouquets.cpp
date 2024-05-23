#include <bits/stdc++.h>
using namespace std;
int Possible(vector<int>& arr, int mid, int m, int k)
{
   long long cnt = 0;
   long long noB = 0;
   for(long long i=0; i<arr.size(); i++){
    if(arr[i]<=mid){
        cnt++;
    } else{
        if(cnt>=k) noB+=(cnt/k); //add all no of bouqets not one only 
       cnt=0;
    }
   }
   noB+= (cnt/k);
   return noB>= m;
}

class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int mn = arr[0], mx=arr[0];
        for(int i=1; i<arr.size(); i++){
            mn = min(arr[i], mn);
            mx = max(arr[i], mx);
        }
        if((arr.size()/m)< k) return -1;
        while(mn<=mx){
            int mid = mn + (mx-mn)/2;
            if(Possible(arr, mid, m, k)){
               mx = mid-1;
            }
            else{
                mn=mid+1;
            }
        }
        return mn;
    }
};