#include <iostream>

using namespace std;

int main(){
    int diametro, a1, a2, a3;
    cin >> diametro >> a1 >> a2 >> a3;
    if (diametro <= a1 && diametro <= a2 && diametro <= a3)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}