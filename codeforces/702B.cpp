#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define ll long long
#define db(x) cout << #x << " = " << x << endl;

int main() {
  int n;
  cin >> n;
  map<int, int> m;
  vector<ll> N(n);
  for (auto &num : N)
    cin >> num;
  for (int i = 0; i < n; i++) {
    m[N[i]]++;
  }
  int count = 0;
  for (int i = 0; i < 31; i++) {
    int key = pow(2, i);
    for (int j = 0; j < n; j++) {
      ll temp = key - N[j];
      if (m.find(temp) == m.end())
        continue;
      else
        count += m[temp];
      if (temp == N[j])
        count++;
    }
  }
  cout << count / 2;

  return 0;
}
