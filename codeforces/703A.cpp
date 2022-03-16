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
  int n;
  int a, b;
  int count = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    if (a > b)
      count++;
    else if (a < b)
      count--;
    else
      continue;
  }
  if (count > 0)
    cout << "Mishka";
  else if (count < 0)
    cout << "Chris";
  else
    cout << "Friendship is magic!^^";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
