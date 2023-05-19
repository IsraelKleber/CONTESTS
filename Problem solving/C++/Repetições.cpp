#include <iostream>

using namespace std;

int main(){
    string DNA;
    int contador = 1; 
    int maior_seq = 1;
    cin >> DNA;

    for(int i = 0; i < DNA.size() - 1; i++){
        if(DNA[i] == DNA[i + 1]){
            contador++;
        }
        else{
            contador = 1;
        }
        if(contador > maior_seq){
            maior_seq = contador;
        }
    }

    cout << maior_seq << "\n";
}