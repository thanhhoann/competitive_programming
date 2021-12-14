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

#define ul unsigned long
#define ll long long
#define pb push_back
#define PI (3.14159265)
#define F first
#define S second

#define db(x) cout << #x << " = " << x << endl;
#define For(n) for (unsigned long i = 0; i < n; i++)
#define For_k(k, n) for (i = k; i < n; i++)
#define For_map(map) for (const auto &e : map)

class A0Paper {
public:
  string canBuild(vector<int> A) {
    int n = (int)A.size();

    for (int i = n; i > 0; i++) {
      A[i - 1] = A[i - 1] + A[i] / 2;
    }
    return A[0] > 0 ? "Possible" : "Impossible";
  }
};
