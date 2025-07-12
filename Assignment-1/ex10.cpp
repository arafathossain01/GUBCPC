#include <iostream>
using namespace std;

int main()
{
    int d, g, p, t;
    float pi = 3.1416;

    cout << "input: ";
    cin >> d >> g >> p >> t;

    cout << "Total wheel rotations: " << p * g;
    int res1 = (pi * d * p * g)/100;
    cout << "\nTotal distance traveled in meters: " << res1;
    int res2 = res1 / t;
    cout << "\nAverage speed in meters per minute: " << res2;
    return 0;
}