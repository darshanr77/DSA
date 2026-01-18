#include <iostream>
#include <climits>
using namespace std;

int main() {

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    int bestBuy = INT_MAX;   // initially very large
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {

        // update best buying price for every index
        bestBuy = min(bestBuy, prices[i]);        // min(-infi,1) and min (-infi,5)  so ans is 1 ie prices[1];

        // selling on day i
        int profit = prices[i] - bestBuy;         // 7 - 1 = 6  this is not possible bcoz  for prices[0] the bestBuy will be 7 so 7 - 7 = 0
                                                  // 1-1 , 5-1 , 3-1 , 6-1 = 5 which is largest and max 

        // update maximum profit
        maxProfit = max(maxProfit, profit);       // max(0,5) = 5
    }

    cout << "Maximum profit is: " << maxProfit << endl;

    return 0;
}
