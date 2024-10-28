class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxprof=0;
        for (int i=0;i<prices.size();i++){
            maxprof=max(maxprof,prices[i]-minprice);
            minprice=min(prices[i],minprice);
        }
        return maxprof;
    }
};