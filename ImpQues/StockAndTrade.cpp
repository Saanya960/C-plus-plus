#include <iostream>
#include <climits>
using namespace std;

int stockAndTrade(int arr[], int n) {
    int bestBuy = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        bestBuy = min(bestBuy, arr[i]);
        int currProfit = arr[i] - bestBuy;
        maxProfit = max(maxProfit, currProfit);
    }

    cout << maxProfit << endl;
    return maxProfit;
}

int main() {
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    stockAndTrade(arr,n);
}