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
  int N[1000000];
  int A[1000000];
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> N[i];
    A[N[i]] = i;
  }

  for (int i = 1; i <= n; i++)
    cout << A[i] << ' ';
}

int main() {
  solve();
  return 0;
}
