#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> a(N);
    int x; 
    cin >> x;
    N--;

    while(N--){
        int v;
        cin >> v;
        a.push_back(v);
    }   

    sort(a.begin(), a.end());

    if (x >= a[a.size() - 1]){
        cout << "S\n";
    }

    else{
        cout << "N\n";
    }
    return 0;
}

// https://codeforces.com/gym/400033/problem/G