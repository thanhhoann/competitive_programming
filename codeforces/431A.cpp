#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int A[10000];
  for (int i = 1; i <= 4; i++) {
    cin >> A[i];
  }

  string s;
  cin >> s;

  int sum = 0;

  for (auto const c : s) {
    int num = c - '0';
    sum += A[num];
  }

  cout << sum;
}

int main() {
  solve();
  return 0;
}
