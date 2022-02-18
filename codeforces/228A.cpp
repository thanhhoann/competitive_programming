#include <algorithm>
#include <iostream>
#include <map>
#include <math.h>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n = 4;
  int A[5];

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int temp = 0;

  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = i; j < n; j++) {
      if (A[i] == A[j])
        count++;
    }
    if (count > 1)
      temp++;
  }

  cout << temp;
}

int main() {
  solve();
  return 0;
}
