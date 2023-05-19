#include <iostream>

using namespace std;

int main(){
    int a = 0;
    while (a != 2002){
        cin >> a;
        if (a == 2002){
            cout << "Acesso Permitido" << "\n";
        }
        else{
            cout << "Senha Invalida" << "\n";
        }
    }
    return 0;
}