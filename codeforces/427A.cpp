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
  int N[n];

  int officers = 0, crimes = 0;

  for (int i = 1; i <= n; i++) {
    cin >> N[i];

    if (N[i] == -1) {
      if (!officers)
        crimes++;
      else
        officers--;
    } else
      officers += N[i];
  }
  cout << crimes;
}

int main() {
  solve();
  return 0;
}
