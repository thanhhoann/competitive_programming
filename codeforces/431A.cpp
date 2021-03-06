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
  int A[1000000];
  for (int i = 0; i < 4; i++)
    cin >> A[i];
  string s;
  cin >> s;

  int sum = 0;
  for (auto c : s) {
    int num = c - '0';
    sum += A[num - 1];
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
