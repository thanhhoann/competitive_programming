#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define db(x) cout << #x << " = " << x << endl;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> N(n);
  queue<int> q;
  for (auto &num : N) {
    cin >> num;
    q.push(num);
  }

  int sum = 0;
  int i = 0;
  int len = 0;

  while (i < n) {
    sum += N[i];
    i++;

    if (sum > t) {
      sum -= q.front();
      q.pop();
    }
  }

  cout << q.size();

  return 0;
}
