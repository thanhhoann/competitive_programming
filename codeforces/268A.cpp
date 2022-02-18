#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, a, b, A[1000000], B[1000000];
  cin >> n;
  int count = 0;

  for (int i = 0; i < n; i++) {
    cin >> a;
    A[i] = a;
    cin >> b;
    B[i] = b;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (A[i] == B[j])
        count++;
    }
  }

  cout << count;
}

int main() {
  solve();
  return 0;
}
