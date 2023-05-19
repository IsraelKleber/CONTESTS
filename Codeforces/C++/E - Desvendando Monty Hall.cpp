#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int c = 0;
    while (n--) {
        short m; cin >> m;
        if (m != 1) c++;
    }
    cout << c << endl;
    return 0;
}

// https://codeforces.com/gym/400033/problem/E