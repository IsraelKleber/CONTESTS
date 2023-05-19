#include <bits/stdc++.h>
using namespace std;

int main() {
  double n, x; cin >> n >> x;
  n *= 100;
  x *= 100;
  int n1 = n, x1 = x;
  int ans = (x1*100)/n1;
  cout << ans << "\n";
  return 0;
}

// https://codeforces.com/gym/399542/problem/A