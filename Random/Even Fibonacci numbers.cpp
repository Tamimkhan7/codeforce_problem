#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll fib = 1, fib1 = 2, f;
        ll ans = 0;
        ans += fib1;
        for (int i = 0; i < ceil(sqrt(n)); i++)
        {
            f = fib + fib1;
            if (f > n)
                break;
            if (f % 2 == 0)
                ans += f;
            fib = fib1;
            fib1 = f;
        }

        cout << ans << endl;
    }
}