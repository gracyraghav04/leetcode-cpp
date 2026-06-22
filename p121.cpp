#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {

        // Ab tak ka minimum price (buy price)
        minPrice = min(minPrice, price);

        // Aaj sell karne par profit
        int profit = price - minPrice;

        // Maximum profit update karo
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = " << maxProfit(prices);

    return 0;
}
