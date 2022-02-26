#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, x;
  cin >> n >> x;
  int A[n + 1], B[n + 1];

  int first_a, first_b, first_bot;
  int sec_a, sec_b, sec_bot;

  for (int i = 0; i < 1; i++) {
    cin >> first_a >> first_b;
    int sum = 0;
    sum += first_a + (7 - first_a) + first_b + (7 - first_b) + x + (7 - x);
    if (sum == 21)
      first_bot = (7 - x);
  }

     for (int i = 0; i < n; i++) {
          
     }

  /* for (int i = 0; i < n; i++) { */
  /* cout << A[i] << 7 - A[i] << B[i] << 7 - B[i] << endl; */
  /* } */
}

int main() {
  solve();
  return 0;
}
