#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int a, b, c, d;
  vector<int> nums;
  int num;
  for (int i = 0; i < 4; i++) {
    cin >> num;
    nums.push_back(num);
  }
  sort(nums.begin(), nums.end());
  a = nums[3] - nums[2];
  b = nums[3] - nums[1];
  c = nums[3] - nums[0];

  cout << a << ' ' << b << ' ' << c;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();
  return 0;
}
