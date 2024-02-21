#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int res = n * 2;
    int a[res];
    for (int i = 0; i < res; i++)
        cin >> a[i];

    vector<int> ami, tumi;
    for (int i = 0; i < n; i++)
        ami.push_back(a[i]);
    for (int i = n; i < res; i++)
        tumi.push_back(a[i]);

    ll ans = 1LL * (accumulate(all(ami), 0));
    ll ans2 = 1LL * (accumulate(all(tumi), 0));

    sort(a, a + res);
    vector<int> x, y;
    for (int i = 0; i < n; i++)
        x.push_back(a[i]);
    for (int i = n; i < res; i++)
        y.push_back(a[i]);

    ll sum = 1LL * (accumulate(all(x), 0));
    ll sum2 = 1LL * (accumulate(all(y), 0));

    if (ans != ans2)
    {
        for (auto xp : ami)
            cout << xp << ' ';
        for (auto xp : tumi)
            cout << xp << ' ';
        cout << '\n';
    }
    else if (sum != sum2)
    {
        for (auto xp : x)
            cout << xp << ' ';
        for (auto xp : y)
            cout << xp << ' ';
        cout << '\n';
    }
    else
        cout << -1 << '\n';
}