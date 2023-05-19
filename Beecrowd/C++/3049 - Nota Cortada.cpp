#include <iostream>

using namespace std;

int main(){
    int cortebase, cortefinal, base1, base2, areaFelix, areaMarzia;
    cin >> cortebase >> cortefinal;
    areaFelix = ((cortebase + cortefinal) * 70)/2;
    base1 = 160 - cortebase;
    base2 = 160 - cortefinal;
    areaMarzia = ((base1 + base2) * 70)/2;
    if (areaMarzia > areaFelix)
        cout << 2 << endl;
    if (areaMarzia == areaFelix)
        cout << 0 << endl;
    if (areaMarzia < areaFelix)
        cout << 1 << endl;
    return 0;
}