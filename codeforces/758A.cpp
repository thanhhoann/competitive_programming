#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
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

void solve() {
  int n;
  cin >> n;
  int num;
  vector<int> temp;

  for (int i = 0; i < n; i++) {
    cin >> num;
    temp.push_back(num);
  }

  sort(temp.begin(), temp.end(), greater<int>());

  int sum = 0;
  for (int i = 1; i < n; i++) {
    int num = temp[0] - temp[i];
    sum += num;
  }
  cout << sum;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
