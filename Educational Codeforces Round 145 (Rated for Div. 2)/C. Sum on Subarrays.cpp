#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1, 0);
        int x = n * (n + 1) / 2;
        int ans = x % k;
        a[ans] = 100;
        int p = n - 1;
        int res = (int)95 / p;
        for (int i = 1; i < ans; i++)
            a[i] = res;
        for (int i = ans + 1; i <= n; i++)
            a[i] = res;
        for (int i = 1; i <= n; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}