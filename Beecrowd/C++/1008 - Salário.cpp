#include <iostream>

using namespace std;

int main(){
    float funcionario, horas, valorHora;
    cin >> funcionario >> horas >> valorHora;
    cout << "NUMBER = " << funcionario << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "SALARY = U$ " << horas * valorHora << endl;
    return 0;
}