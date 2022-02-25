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

  vector<int> N;
  int count = 0;
  int num;
  for (int i = 0; i < n; i++) {
    cin >> num;
    N.push_back(num);
  }

  int max = N[k - 1];

  for (int i = 0; i < n; i++) {
    if (N[i] >= max && N[i] > 0)
      count++;
  }

  cout << count;
}

int main() {
  solve();
  return 0;
}
