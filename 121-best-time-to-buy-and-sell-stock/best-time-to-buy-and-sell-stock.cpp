class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<minPrice)
            {
                minPrice=prices[i];
            }
            else
            {
                maxProfit=max(maxProfit,prices[i]-minPrice);
            }
        }
        return maxProfit;
    }
};


// prices = array

// prices[i] = price of given stock at i th day
// the price of next day = the price at which we are going to sell that stock 
// max Profit =???
// find out the maximum profit from the array like if we are given to find out the sum of every 2 elements and find maximum from them what we do we will update the maximum profit everytime similarly find out profit everyconsecutive numbers

// find out the profit for two numbers every time and keep updating the profit also ,,,, so......








































