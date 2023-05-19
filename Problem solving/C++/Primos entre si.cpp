#include <iostream>

using namespace std;

int primo (int a){
    int i;
    if (a % 2 == 0 || a == 1){
        if(a == 2){
            return 1;
        }
        return 0;
    }

    for (i = 3; i * i < a + 1; i+=2){
        if (a % i == 0){
            return 0; //0 = não primo
        }
    }
    return 1; //primo
}

int main(){
    int n1, n2, maior, menor, status = 1;
    cin >> n1 >> n2;
    if (primo(n1) == 1 && primo(n2) == 1){
        cout << "N1: " << n1 << " e " << n2 << " são primos entre si" <<"\n";
    }
    else{  
        menor = n1;
        if (n2 < menor){
            menor = n2;
        }
        for (int i = 2; i < menor + 1; i++){
            if (n1 % i == 0 && n2 % i == 0){
                cout << n1 << " e " << n2 << " não são primos entre si" <<"\n";
                status = 0;
            }
        }
        if (status == 1){
            cout << n1 << " e " << n2 << " são primos entre si" <<"\n";
        }
    }
    return 0;
}