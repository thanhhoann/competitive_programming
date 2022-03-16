#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#define SIZE 100000

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, num;
  vector<int> N;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    N.push_back(num);
  }

  sort(N.begin(), N.end());

  int dis = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    if ((i + 1) < n) {
      int a = N[i];
      int b = N[i + 1];
      int dis = abs(a - b);
      if (dis > 1) {
        cout << "NO\n";
        return;
      }
    }
  }

  cout << "YES";

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
