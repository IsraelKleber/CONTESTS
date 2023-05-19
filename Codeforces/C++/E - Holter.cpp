#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++){
        cin >> v[i];
    }

    int soma = 0;

    for (int i = 0; i < N; i++){
        soma += v[i];
    }

    int media = soma / int(v.size());

    int media_maior = (media + (0.1 * media));
    int media_menor = (media - (0.1 * media));
    int q = 0;

    for (int i = 0; i < N; i++){
        if(v[i] < media_menor || v[i] > media_maior){
            q++;
        }
    }

    cout << media << "\n";
    cout << q << "\n";


    return 0;
}

// https://codeforces.com/gym/399542/problem/E