class Solution {
	public:
		int maProfit(vector<int>& prices)
		{
			int least_value = INT_MAX;
			int overall_profit = 0;
			int current_profit = 0;
			
			for (int i = 0; i<prices.size();i++)
			{
			if(prices [i]< least_value)
			{
				least value = prices [i];
				}
				current_profit = prices [i]-least_value;
					
				if(current_profit > overall_profit)
				{
					overall_profit = current_profit;
				}
			}
	return overall_profit;
		}
};
