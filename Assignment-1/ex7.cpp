#include <iostream>
using namespace std;

int main()
{
    int p, f;
    cout << "pizza: ";
    cin >> p;
    cout << "friends: ";
    cin >> f;
    int total = p * 8;

    int get = total / f;
    int remain = total % f;

    cout << "Get: " << get << " " << "Remain: " << remain;

    return 0;
}