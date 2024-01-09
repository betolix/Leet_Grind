
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_low=prices[0];
        int profit=0;
        // int sell_high=0;
        // int size=prices.size();
        int size=prices.size();
        int current_profit=0;

        for(int i=1;i<size;i++){

            if(prices[i] < buy_low){
                buy_low=prices[i];
            }else{
                current_profit = prices[i] - buy_low;
                profit = std::max(current_profit,profit);
            };
        };
        return profit;
    };
};

int main() {
    
    Solution solution;
    vector<int> prices = {7,1,5,3,6,4};

    solution.maxProfit(prices);
  
}

/*
g++ 0005_Best_Time_to_Buy_and_Sell_Stock.cpp -o 0005_Best_Time_to_Buy_and_Sell_Stock.out

*/