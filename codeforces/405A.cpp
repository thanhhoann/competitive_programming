#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n;
  cin >> n;

  int num;
  vector<int> N;
  for (int i = 0; i < n; i++) {
    cin >> num;
    N.push_back(num);
  }

  sort(N.begin(), N.end());
  for (int i = 0; i < n; i++) {
    cout << N[i] << ' ';
  }
}

int main() {
  solve();
  return 0;
}
