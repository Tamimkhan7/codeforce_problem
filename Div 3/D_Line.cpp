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
        int n, x, a;
        string s;
        cin >> n >> s;
        if (n % 2 == 0)
        {
            x = n / 2;
            for (int i = 0; i < x; i++)
            {
                if (s[i] == 'L')
                    s[i] = 'R';
                int ans = 0;
                for (int j = 0; j < n; j++)
                {
                    if (s[j] == 'L')
                        ans += j - 0;
                    else
                        ans += (n - 1) - j;
                }
                cout << ans << ' ';
            }
            for (int i = x; i < n; i++)
            {
                if (s[i] == 'R')
                    s[i] = 'L';
                int ans = 0;
                for (int j = 0; j < n; j++)
                {
                    if (s[j] == 'L')
                        ans += j - 0;
                    else
                        ans += (n - 1) - j;
                }
                cout << ans << ' ';
            }
            cout << '\n';
        }
        else
        {
            a = n / 2;
            for (int i = 0; i < a; i++)
            {
                if (s[i] == 'L')
                    s[i] = 'R';
                int ans = 0;
                for (int j = 0; j < n; j++)
                {
                    if (s[j] == 'L')
                        ans += j - 0;
                    else
                        ans += (n - 1) - j;
                }
                cout << ans << ' ';
            }
            for (int i = a + 1; i <= n; i++)
            {
                if (s[i] == 'R')
                    s[i] = 'L';
                int ans = 0;
                for (int j = 0; j < n; j++)
                {
                    if (s[j] == 'L')
                        ans += j - 0;
                    else
                        ans += (n - 1) - j;
                }
                cout << ans << ' ';
            }
            cout << '\n';
        }
    }
}
