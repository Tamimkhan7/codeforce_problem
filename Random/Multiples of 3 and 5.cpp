#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mul(ll limit, ll n)
{
    ll ans = (n - 1) / limit;
    return limit * ans * (ans + 1) / 2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = mul(3, n) + mul(5, n) - mul(15, n);
        cout << ans << endl;
    }
}
// don't use brute force use to another optimal solution