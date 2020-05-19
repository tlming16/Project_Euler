/*
* N queens problem from leetcode
* see also https://leetcode-cn.com/problems/n-queens/solution/n-queens-by-mathm-2/
*
*/

class Solution {
  vector<bool> rows;
  vector<bool> hills;
  vector<bool> dales;
  int n;
  vector<vector<string>> output ;
  vector<int> queens;

  public:
   bool isNotUnderAttack(int row, int col) {
    bool res = rows[col]||hills[row - col + 2 * n]||dales[row + col];
    return !res;
  }

  void placeQueen(int row, int col) {
    queens[row] = col;
    rows[col] = true;
    hills[row - col + 2 * n] = true;  
    dales[row + col] = true;   
  }

   void removeQueen(int row, int col) {
    queens[row] = 0;
    rows[col] = false;
    hills[row - col + 2 * n] = false;
    dales[row + col] = false;
  }

  void addSolution() {
   vector<string> solution;
    for (int i = 0; i < n; ++i) {
      int col = queens[i];
      string sb;
      for(int j = 0; j < col; ++j) sb.push_back('.');
      sb.push_back('Q');
      for(int j = 0; j < n - col - 1; ++j) sb.push_back('.');
      solution.push_back(sb);
    }
    output.push_back(solution);
  }

 void backtrack(int row) {
    for (int col = 0; col < n; col++) {
      if (isNotUnderAttack(row, col)) {
        placeQueen(row, col);
        if (row + 1 == n) addSolution();
        else backtrack(row + 1);
        removeQueen(row, col);
      }
    }
  }

  vector<vector<string>> solveNQueens(int n) {
    this->n = n;
    rows = vector<bool>(n);
    hills = vector<bool>(4 * n - 1);
    dales = vector<bool>(2 * n - 1);
    queens = vector<int>(n);

    backtrack(0);
    return output;
  }
};