#include <iostream>
using namespace std;

int main()
{
    int t, m, c, r;
    cout << "Input: ";
    cin >> t >> m >> c >> r;

    int res1 = (t * m) / c;
    int res2 = (t * m) % c;
    int res3 = res1 * r;

    cout << "prepare crates: " << res1 << "\nmangos remain: " << res2 << "\ntotal revenue: " << res3;

    return 0;
}