#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
const int N = 1e2;
void solve()
{
    int x, y;
    cin >> x >> y;
    vector<int> a, b;
    for (int i = 0; i <= N; i++)
        a.push_back(x ^ i);
    for (int i = 0; i <= N; i++)
        b.push_back(y ^ i);
    for (int i = 1; i <= N; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
