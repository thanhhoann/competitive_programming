/*
 * I named it "Lights Out" Algorithm ( actually the algorithm is not mine, but I
 * think having a name is pretty cool :) ) 
 *
 *  Steps:
 *
 * 1. Declare 2 matrices: initial[][] and total_light_pressed[][]
 * 2. At the beginning, let the total_light_pressed[][] having the same elements as the initial[][]
 * 3. For every element of two matrices:
 *    total_light_pressed[i][j - 1] += initial[i][j];
 *    total_light_pressed[i][j + 1] += initial[i][j];
 *    total_light_pressed[i - 1][j] += initial[i][j];
 *    total_light_pressed[i + 1][j] += initial[i][j];
 * 4. For every element of the total_light_pressed[][]:
 *    - If it's even, then print 0. Else, print 1
 *
 */

#include <algorithm>
#include <array>
#include <chrono>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <typename... T> auto sum(T... args) { return (args + ...); }
template <typename... T> void read(T &...args) { ((cin >> args), ...); }
template <typename... T> void write(T &&...args) {
  ((cout << args << " "), ...);
}

#define ul unsigned long
#define ll long long
#define pb push_back
#define PI (3.14159265)
#define F first
#define S second

#define db(x) cout << #x << " = " << x << endl;
#define For(i, k, n) for (unsigned long i = k; i < n; i++)
#define For_equal(i, k, n) for (unsigned long i = k; i <= n; i++)
#define For_map(map) for (const auto &e : map)

void solve() {
  int n = 3;
  int A[10][10];
  int res[10][10];

  For_equal(i, 1, n) For_equal(j, 1, n) {
    read(A[i][j]);
    res[i][j] = A[i][j];
  }

  For_equal(i, 1, n) For_equal(j, 1, n) {
    res[i][j - 1] += A[i][j];
    res[i][j + 1] += A[i][j];
    res[i - 1][j] += A[i][j];
    res[i + 1][j] += A[i][j];
  }

  For_equal(i, 1, n) {
    For_equal(j, 1, n) {
      if (res[i][j] % 2)
        cout << "0";
      else
        cout << "1";
    }
    cout << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
