#include <algorithm>
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
  int n, k;
  cin >> n >> k;
  vector<int> A(n), B(n);
  for (auto &num : A)
    cin >> num;
  for (auto &num : B)
    cin >> num;

  sort(A.begin(), A.end());
  sort(B.begin(), B.end(), greater<int>());

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (i < k)
      sum += max(A[i], B[i]);
    else
      sum += A[i];
  }

  cout << sum;

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
