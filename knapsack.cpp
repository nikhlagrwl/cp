// Function for 0/1 Knapsack problem
// weight   --> Array containing weight of elements
// val      --> Array containing value of elements
// capacity --> Total capacity of the Knapsack
// N        --> Total number of elements

// Time Complexilt  --> O(N*capacity)
// Space Complexity --> O(N*capacity)



int knapsack(vector<int> weight, vector<int> val, int capacity)
{
	int N = val.size();
	vector<vector<int>> DP(N, vector<int>(capacity+1, 0));

	for(int i=0; i<=capacity; i++)
		if(i >= weight[0])
			DP[0][i] = val[0];

	for(int i=1; i<N; i++)
	{
		for(int j=1; j<=capacity; j++)
		{
			if(j < weight[i])
				DP[i][j] = DP[i-1][j];
			else
				DP[i][j] = max(DP[i-1][j], DP[i-1][j-weight[i]] + val[i]);
		}
	}

	return DP[N-1][capacity];
}