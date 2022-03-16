#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> nums;

  for (auto const n : to_string(n)) {
    nums.push_back(n - '0');
  }

  int index = nums.size() - 1;

  while (k--) {
    if (nums[index] != 0) {
      nums[index]--;
    } else if (nums[index] == 0) {
      nums.pop_back();
      index--;
    }
  }
  for (auto const n : nums) {
    cout << n;
  }
}

int main() {
  solve();
  return 0;
}
