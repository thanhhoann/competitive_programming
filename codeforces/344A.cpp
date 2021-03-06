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
  string N[100000];
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> N[i];
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (N[i] != N[i + 1]) {
      count++;
    }
  }
  cout << count;
}

int main() {
  solve();
  return 0;
}
