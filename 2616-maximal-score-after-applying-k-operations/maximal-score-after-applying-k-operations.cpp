class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq (nums.begin(), nums.end());
        long long sum = 0;
        while(k>0){
            int num = pq.top();
            pq.pop();
            pq.push(ceil((double)num/3));
            sum += num;
            k--;
        }
        return sum;
    }
};