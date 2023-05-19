#include <iostream>

using namespace std;

int main(){
    int soma = 0, disponivelFrango, disponivelBife, disponivelMassa, pedidosFrango, pedidosBife, pedidosMassa, frango, bife, massa;
    cin >> disponivelFrango >> disponivelBife >> disponivelMassa >> pedidosFrango >> pedidosBife >> pedidosMassa;
    frango = disponivelFrango - pedidosFrango;
    bife = disponivelBife - pedidosBife;
    massa = disponivelMassa - pedidosMassa;
    if (frango < 0)
        soma += frango;
    if (bife < 0)
        soma += bife;
    if (massa < 0)
        soma += massa;
        
    cout << soma * -1 << endl;
    return 0;
}