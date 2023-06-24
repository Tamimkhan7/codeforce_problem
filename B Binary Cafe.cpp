#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int c = pow(2, k);
        if (c > n)
            cout << n + 1 << endl;
        else
            cout << c << endl;
    }
}