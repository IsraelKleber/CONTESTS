#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int maior = 0, count = 1, h = 0, menor=50;
  sort(s.begin(), s.end());
  
  for (int i = 0; i < 50; i++) {
    if (s[i] == 'H') {
      h++;
    } else if (s[i] == s[i+1]) {
      count++;
    } else {
      if (maior < count) {
        maior = count;
      }
      if (menor > count) {
        menor =  count;
      }
      count = 1;
    }
  }
  
  if (h > maior) {
    cout << ":(" << "\n";
  } else if (h < menor) {
    cout  << ":)" << "\n";
  } else {
    cout << ":/" << "\n";
  }
  return 0;
}

// https://codeforces.com/gym/399542/problem/H