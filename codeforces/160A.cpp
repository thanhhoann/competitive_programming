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

  int max = 0;

  for (int i = 0; i < n; i++) {
    cin >> num;
    N.push_back(num);
    max += num;
  }

  int need = max / 2 + 1;
  int temp = 0;
  int count = 0;

  sort(N.begin(), N.end());

  for (int i = N.size() - 1; i >= 0; i--) {
    temp += N[i];
    count++;

    if (temp >= need) {
      cout << count;
      return;
    }
  }
}

int main() {
  solve();
  return 0;
}
