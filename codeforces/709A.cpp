#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, b, d;
  cin >> n >> b >> d;

  int N[n];
  int sum = 0, count = 0;

  for (int i = 1; i <= n; i++) {
    cin >> N[i];
    if (N[i] > b)
      continue;
    else {
      sum += N[i];
      if (sum > d) {
        count++;
        sum = 0;
      }
    }
  }
  cout << count;
}

int main() {
  solve();
  return 0;
}
