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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;
        for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
        {
            if (s[i] != s[j])
                cnt += 2;
            else
                break;
        }
        int x = n - cnt;
        if (x > 0)
            cout << x << '\n';
        else
            cout << 0 << '\n';
    }
}
