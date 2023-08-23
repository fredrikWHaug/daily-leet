class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest_price = prices[0];
        int highest_price = prices[0];
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < lowest_price) {
                lowest_price = prices[i];
            }
        }
        // invariant: lowest_price containts the lowest price in the list

        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > highest_price) {
                highest_price = prices[i];
            }
        }
        // invariant: highest price contains the highest price in the list
    return highest_price - lowest_price;
    }
};
