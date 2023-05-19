#include <iostream>

using namespace std;

int main(){
    int a1, a2, a3, andar1, andar2, andar3, andarPrincipal;
    cin >> a1 >> a2 >> a3;
    andar1 = a1 * 0 + a2 * 2 + a3 * 4;
    andar2 = a1 * 2 + a2 * 0 + a3 * 2;
    andar3 = a1 * 4 + a2 * 2 + a3 * 0;
    if (andar1 <= andar2 && andar1 <= andar3){
        andarPrincipal = andar1;
    }
    else if (andar2 <= andar1 && andar2 <= andar3){
        andarPrincipal = andar2;
    }
    else if (andar3 <= andar1 && andar3 <= andar2){
        andarPrincipal = andar3;
    }
    cout << andarPrincipal << endl;
    return 0;
}