#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k; 
  cin >> n >> k;
  vector<pair<int, int>> v;
  vector <int> cores;
  
  for(int i = 0; i < n; i++){
    int ni, ki; 
    cin >> ni >> ki;
    v.push_back({ni, ki});
    cores.push_back(ki);
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++){
    if (v[i].second != cores[i]){
      cout << "N\n";
      return 0;
    }
  }

  cout << "Y\n";
  
}

// https://codeforces.com/gym/103388/problem/H