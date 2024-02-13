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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    vector<int> value(m);
    for (int i = 0; i < m; i++)
        cin >> value[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        char x = s[i][0];
        // cout << x << '\n';
        for (int j = 0; j < m; j++)
        {
            if (x == 'A')
            {
                int a = (s[i][j] - '0');
                int b = (s[i][j + 1] - '0');
                cout << a << ' ' << b << '\n';
                if (abs(a - b) == 1 || abs(a - b) == 0)
                {
                    ans += value[j];
                    cout << ans << '\n';
                }
                else
                {
                    ans += value[j];
                    break;
                }
            }
        }
    }
    cout << ans << '\n';
}