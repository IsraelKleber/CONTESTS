#include <iostream>

using namespace std;

int main(){
    int n[6], i, valor_v, veri_array = 0;
    for (i=0; i<6 ; i++){
        cin >> n[i];
    }
    cin >> valor_v;

    for (i=0; i < 6 ; i++){ // =====>  2n + 2(n-1)
        if (n[i] == valor_v){ // ===>  2(n-1)
            veri_array = 1; // =====>  1
            break;          // =====>  1
        }
    }
        cout << veri_array << "\n"; // => 1
    return 0;
}