#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define ll long long
#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int num;
  vector<int> nums;
  for (int i = 0; i < 3; i++) {
    cin >> num;
    nums.push_back(num);
  }
  sort(nums.begin(), nums.end());
  cout << (nums[2] - nums[0]);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
