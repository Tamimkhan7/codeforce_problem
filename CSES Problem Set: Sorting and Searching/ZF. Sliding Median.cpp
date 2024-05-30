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
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    multiset<int> se;
    int mid = k / 2;
    int r = 1;
    while (se.size() < k)
        se.insert(a[r++]);
    auto it = se.begin();
    advance(it, mid);
    cout << *it << ' ';
    se.erase(se.find(a[1]));
    for (int l = k + 1; l <= n; l++)
    {
        se.insert(a[l]);
        auto it = se.begin();
        advance(it, mid);
        cout << *it << ' ';
        se.erase(se.find(a[l - k + 1]));
    }
    cout << '\n';

    return 0;
}
