#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x1, x2, y1, y2, d;
    cin >> x1 >> y1 >> x2 >> y2;
    d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << sqrt(d) << endl;
    return 0;
}