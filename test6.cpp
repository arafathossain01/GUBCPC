// if any two is know the solution then print the value how many solution is know a team. 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum ;
    int count = 0;
    while (n--)
    {
        int k, l, m;
        cin >> k >> l >> m;
        sum = k + l + m;
        if (sum >= 2)
        {
            count ++;
        }
    }
    cout << count;

    return 0;
}