#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define ll long long
#define db(x) cout << #x << " = " << x << endl;
template <class T> void _db(vector<T> nums) {
  cerr << "[ ";
  for (T num : nums)
    cerr << num << ' ';
  cerr << " ]";
}

class Solution {
public:
  int maxProduct(vector<int> &nums) {
    sort(nums.begin(), nums.end(), greater<int>());
    int a = nums[0] - 1;
    int b = nums[1] - 1;
    return a * b;
  }
};

int main() {
  Solution *sol = new Solution;
  return 0;
}
