class Solution {
public:
    int maxProfit(vector<int>& prizes) {
        int profit = 0; int buyP = prizes[0];
        for(int i=1; i<prizes.size(); i++){
            profit = max(profit,  prizes[i] - buyP);
            buyP = min(prizes[i], buyP);
        }
        return profit;
    }
};