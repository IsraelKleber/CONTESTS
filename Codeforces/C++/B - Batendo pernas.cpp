#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B, C, P;
    double VP, VC, CALCADA, PARQUE;
    cin >> A >> B >> VP >> VC;
    C = A + B;
    P = ((A * A) + (B * B));
    P = sqrt(P);
    PARQUE = P / VP;
    CALCADA = C / VC;
    if (CALCADA < PARQUE){
        cout << "CALCADA\n";
    } else {
        cout << "PARQUE\n";
    }
    return 0;
}

// https://codeforces.com/gym/399542/problem/B