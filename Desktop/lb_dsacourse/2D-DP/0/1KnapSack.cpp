// 0/1 KnapSack

// Recursive
//  int solve(vector<int> &weight, vector<int> &value, int index, int capacity){
//      //Base Case
//      if(index == 0){
//          if(weight[0] <= capacity)
//              return value[0];
//          else
//              return 0;
//      }
//      int include = 0;
//      if(weight[index] <= capacity)
//             include = value[index] + solve(weight, value, index-1, capacity-weight[index]);

//     int exclude = 0 + solve(weight,value,index-1,capacity);

//     int ans = max(include,exclude);
//     return ans;
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
// 	return solve(weight,value,n-1,maxWeight);
// }

// Recursion+Memoization

// int solveMem(vector<int> &weight, vector<int> &value, int index, int capacity,vector<vector<int>> &dp){
//     //Base Case
//     if(index == 0){
//         if(weight[0] <= capacity)
//             return value[0];
//         else
//             return 0;
//     }
//     if(dp[index][capacity] != -1)
//         return dp[index][capacity];

//     int include = 0;
//     if(weight[index] <= capacity)
//         include = value[index] + solveMem(weight, value, index-1, capacity-weight[index] ,dp);

//     int exclude = 0 + solveMem(weight,value,index-1,capacity,dp);

//     dp[index][capacity] = max(exclude, include);
//     return dp[index][capacity];
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     //in recursive call two states value is changed-> index and capacity therfore its 2D DP.
//     //created a dp array of n rows and maxWeight+1 columns
//     vector<vector<int>> dp( n, vector<int>(maxWeight+1, -1) );
//     return solveMem(weight, value, n-1, maxWeight, dp);
// }

// Tabulation
// int solveTab(vector<int> &weight, vector<int> &value, int n, int capacity)
// {

//     // DP array creation
//     vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));

//     // base case -> analyze
//     for (int w = weight[0]; w <= capacity; w++)
//     {
//         if (weight[0] <= capacity)
//             dp[0][w] = value[0];
//         else
//             dp[0][w] = 0;
//     }

//     for (int index = 1; index < n; index++)
//     {
//         for (int w = 0; w <= capacity; w++)
//         {
//             int include = 0;
//             if (weight[index] <= w)
//                 include = value[index] + dp[index - 1][w - weight[index]];
//             int exclude = 0 + dp[index - 1][w];
//             dp[index][w] = max(exclude, include);
//         }
//     }
//     return dp[n - 1][capacity];
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     return solveTab(weight, value, n, maxWeight);
// }