#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input N natural number: ";
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    cout << "output: " << sum;
    return 0;
}