#include <iostream>

using namespace std;

int main(){
    int n[6], i, menor;
    for (i=0; i<6 ; i++){
        cin >> n[i];
    }
    menor = n[0]; 
    for (i=0; i < 6 ; i++){ 
        if (n[i] < menor){ 
            menor = n[i]; 
        }
    }                      
    cout << menor << "\n"; 
    return 0;
}