#include <iostream>

using namespace std;

int main(){
    int l, d, k, p, pedagio;
    cin >> l >> d >> k >> p;
    pedagio = ((l / d)*p) + (k * l);
    cout << pedagio << endl;
    return 0;
}