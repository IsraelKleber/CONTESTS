#include <iostream>

using namespace std;

int main(){
    double raio, area;
    cin >> raio;
    area = 3.14159*(raio*raio);
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "A="  << area << endl; 
    return 0;
}