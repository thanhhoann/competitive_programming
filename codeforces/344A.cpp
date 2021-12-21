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

  string S[100001];

  for (int i = 1; i <= n; i++)
    cin >> S[i];

  int count = 0;

  for (int i = 1; i <= n; i++) {
    if (S[i] == S[i + 1])
      continue;
    else
      count++;
  }
  cout << count;
}

int main() {
  solve();
  return 0;
}
