/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
  public:
   vector<int> maxSlidingWindow(vector<int> nums, int k) {
    int n = nums.size();
    if (n ==0||k == 0) return {};
    if (k == 1) return nums;
    unique_ptr<int[]> ml(new int [n]);
    unique_ptr<int[]> mr(new int [n]);

    int * left = ml.get();
    left[0] = nums[0];
    int * right = mr.get();
    right[n - 1] = nums[n - 1];
    for (int i = 1; i < n; i++) {
      // from left to right
      if (i % k == 0) left[i] = nums[i];  // block_start
      else left[i] = max(left[i - 1], nums[i]);

      // from right to left
      int j = n - i - 1;
      if ((j + 1) % k == 0) right[j] = nums[j];  // block_end
      else right[j] = max(right[j + 1], nums[j]);
    }

    vector<int> output;
    output.reserve(n-k+1);
    for (int i = 0; i < n - k + 1; i++)
      output.push_back( max(left[i + k - 1], right[i]));

    return output;
  }
};