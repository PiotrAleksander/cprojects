#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926;
int main(void)
{
    double x=PI, y=1, z;
    cout << "Witaj w świecie C++!" << endl;
    z = y+1;
    y = pow(x,z);
    cout << "W świecie tym kwadrat liczby pi wynosi " << y << endl;
    cout << "Wprowadź potęgę: " << endl;
    cin >> z;
    y = pow(x,z);
    cout << "Pi podniesione do potęgi " << z << " wynosi " << y << endl;
    cout << "Miłego dnia!" << endl;
    cin >> z;
    return 0;
}