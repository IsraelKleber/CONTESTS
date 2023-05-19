#include <iostream>

using namespace std;

int main(){
    int tempo, hora, minutos, segundos,reshora;
    cin >> tempo;
    hora = tempo/3600;
    reshora = tempo%3600;
    minutos = reshora/60;
    segundos = reshora%60;
    cout << hora << ":" << minutos << ":" << segundos << endl;
    return 0;
}