#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  int list [n-1];
  
  for (int i=0; i<n-1; i++) {
    cin >> list[i];
  }
  sort(list, list + (n-1));
  int m=1;
  for (int i=0; i<n; i++) {
    // 1
    if(list[i] != m) {
      cout << m;
      break;
    }
    m++;
  }
}