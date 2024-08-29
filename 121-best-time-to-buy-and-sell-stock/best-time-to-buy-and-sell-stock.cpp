class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice=INT_MAX, profit=0;
        for(auto i: prices){
            buyprice = min(buyprice, i);
            profit = max(profit, i-buyprice);
        }
        return profit ; 
    }
};