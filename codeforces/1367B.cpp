#include <iostream>

using namespace std;

int main() {
  int n;
  int i = 0;
  while (cin >> n, n) {
    int a = n % 2;
    int b = i % 2;
    cout << a - b << '\n';
    i++;
  }
}
