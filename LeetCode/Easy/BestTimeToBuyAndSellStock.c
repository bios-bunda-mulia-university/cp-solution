int maxProfit(int* prices, int pricesSize){
    int min = INT_MAX;
    int profit = INT_MIN;
    for (int i=0; i<pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];
        }
        
        profit = fmax(profit, prices[i] - min);
    }
    
    return profit;
}
