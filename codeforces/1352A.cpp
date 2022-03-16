#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  string n;
  cin >> n;

  int temp = n.length();
  vector<int> nums;

  for (int i = 0; i < n.length(); i++) {
    int num = n[i] - '0';
    int res = (num * pow(10, temp)) / 10;
    if (res != 0)
      nums.push_back(res);
    temp--;
  }

  cout << nums.size() << '\n';
  for (auto const n : nums)
    cout << n << ' ';

  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }

  return 0;
}
