/*
 * Kadane's Alogrithm:
 * - Set the current sum as the first element of the array.
 * - Loop through the array
 *    - IF the next element is > than the current element => current sum = next
 * element.
 *    - IF the sum of the next element and the current sum is > than current
 * element => current sum = next el + current sum
 */

#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

class Solution {
public:
  int maxSubArray(vector<int> &nums) {

    int max_sum = nums[0];
    int current_sum = nums[0];

    for (int i = 1; i <= nums.size(); i++) {
      current_sum = max(nums[i] + current_sum, nums[i]);
      max_sum = max(max_sum, current_sum);
    }

    return max_sum;
  }
};

int main() {
  Solution *sol = new Solution;
  cout << sol->maxSubArray({-2, 1});
  return 0;
}
