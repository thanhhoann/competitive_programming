#include <algorithm>
#include <functional>
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
  int size = 2 * n + 1;
  int N[size + 1];

  for (int i = 0; i < size; i++) {
    cin >> N[i];
  }

  int count = k;

  for (int i = 0; i < size; i++) {
    if (i % 2 == 1 && count > 0) {
      N[i]--;
      count--;
      if (N[i + 1] >= N[i] || N[i - 1] >= N[i]) {
        N[i]++;
        count++;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    cout << N[i] << ' ';
  }
}

int main() {
  solve();
  return 0;
}
