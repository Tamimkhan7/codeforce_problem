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
        int m = 0, T = 0, i = 0, u = 0, r = 0;
        for (auto c : s)
        {
            if (c == 'm')
                m++;
            else if (c == 'T')
                T++;
            else if (c == 'i')
                i++;
            else if (c == 'u')
                u++;
            else if (c == 'r')
                r++;
        }
        // cout << m << ' ' << T << ' ' << i << ' ' << u << ' ' << r << '\n';
        if (n == 5 and m == 1 and T == 1 and i == 1 and u == 1 and r == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}