#include <iostream>
#include <vector>

using namespace std;
//optimized solution
//TC:O(n) SC:O(1)
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {

        
        minPrice = min(minPrice, price);

        
        int profit = price - minPrice;

        
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = " << maxProfit(prices);

    return 0;
}
//MY Leetcode approach 
/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                int profit=prices[j]-prices[i];
                maxp=max(profit,maxp);
            }
        }
        if(maxp){
            return maxp;
        }
        return 0;
    }
    
};*/ 
/*Problem of my approach:
Time coplexity:O(n^2)+time limit exceeded 
 Not able to comprehend all  test cases 
Learning:Greddy Approach+optimization*/
    

