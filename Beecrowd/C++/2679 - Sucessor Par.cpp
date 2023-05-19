#include <iostream>

using namespace std;

int main(){
    long X;
    cin >> X;
    if (X % 2 == 0)
        X = X + 2;
    else
        X = X + 1;
    cout << X << endl;
    return 0;
}