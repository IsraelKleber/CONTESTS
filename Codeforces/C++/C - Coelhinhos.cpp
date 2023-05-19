#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll solve(ll x, ll y, int a, int b){
    if ((y - x) % (a + b) == 0){
        return (y - x) / (a + b);
    }
    else{
        return -1;
    }
}
 
int main(){
    int t; cin >> t;
    while(t--){
        ll x, y;
        int a, b;
        cin >> x >> y >> a >> b;
        cout << solve(x, y, a, b) << "\n";
    }
    return 0;
}

// https://codeforces.com/gym/400033/problem/C