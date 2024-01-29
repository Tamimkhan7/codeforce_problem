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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int cnt = 0, mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
            cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    cout << mx + 1 << '\n';
}