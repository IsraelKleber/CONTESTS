#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> RGB(3);
    cin >> RGB[0] >> RGB[1] >> RGB[2];
    sort(RGB.begin(), RGB.end());
    if (RGB[1] - RGB[0] == RGB[2] - RGB[1]){
        cout << "S\n"; 
    } else {
        cout << "N\n";
    }
    return 0;
}

// https://codeforces.com/gym/399542/problem/C