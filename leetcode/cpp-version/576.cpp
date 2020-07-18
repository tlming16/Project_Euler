/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int findPaths(int m, int n, int N, int i, int j) {
       int MOD = 1000000007;
  if (N == 0) { return 0; }

  vector<vector<vector<unsigned long long int>>> dp(m + 2, vector<vector<unsigned long long int>>(n + 2, vector<unsigned long long int>(N + 1, 0)));
  for (int i = 0; i <= m + 1; i++) {
    dp[i][0][0] = 1;
    dp[i][n + 1][0] = 1;
  }
  for (int i = 0; i <= n + 1; i++) {
    dp[0][i][0] = 1;
    dp[m + 1][i][0] = 1;
  }
  for (int k = 1; k <= N; k++) {
    for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= n; j++) {
        dp[i][j][k] = (dp[i - 1][j][k - 1] + dp[i + 1][j][k - 1] + \
                dp[i][j - 1][k - 1] + dp[i][j + 1][k - 1]) % MOD;
      }
    }
  }
  int sum = 0;
  for (int k = 1; k <= N; k++) {
    sum = (sum + dp[i + 1][j + 1][k]) % MOD;
  }
  return sum;
    }
};