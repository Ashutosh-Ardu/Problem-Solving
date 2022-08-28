class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int min = INT_MAX;
    int p = 0;

    for (int i = 0; i < prices.size(); i++)
    {
      if (prices[i] < min)
        min = prices[i];
      int temp = prices[i] - min;

      if (p < temp)
        p = temp;
    }
    return p;
  }
};

// faster solution
class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int maxProfit = 0;
    int minPrices = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
      int diff = prices[i] - minPrices;
      maxProfit = max(maxProfit, diff);
      minPrices = min(minPrices, prices[i]);
    }
    return maxProfit;
  }
}