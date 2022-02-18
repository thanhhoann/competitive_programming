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

  vector<int> N;
  int num;

  for (int i = 0; i < n; i++) {
    cin >> num;
    N.push_back(num);
  }

  int a = 0, b = 0;
  int left = 0, right = n - 1;
  int count = 0;

  while (left < right) {
    if (N[left] < N[right]) {
      if (count % 2 == 0)
        a += N[right];
      else
        b += N[right];
      right--;
    } else if (N[left] > N[right]) {
      if (count % 2 == 0)
        a += N[left];
      else
        b += N[left];
      left++;
    }
    count++;
  }

  if (count % 2 == 0)
    a += N[left];
  else
    b += N[left];

  cout << a << ' ' << b;
}

int main() {
  solve();
  return 0;
}
