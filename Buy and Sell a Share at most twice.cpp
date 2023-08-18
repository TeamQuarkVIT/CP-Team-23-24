int maxProfit(vector<int>&price){
        int n=price.size();
        int profit[n];
        for (int i = 0; i < n; i++)
        profit[i] = 0;
    
        int maxi = price[n - 1];
        for (int i = n - 2; i >= 0; i--) {
        if (price[i] > maxi)
        maxi = price[i];
        profit[i]= max(profit[i + 1], maxi - price[i]);
        }
     
        int mini = price[0];
        for (int i = 1; i < n; i++) {
        if (price[i] < mini)
        mini = price[i];
        profit[i] = max(profit[i - 1],profit[i] + (price[i] - mini));
        }
        int result = profit[n - 1];
        return result;
}