#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[i] = x % 2;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == a[i])
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[i] != a[j])
                {
                    int p = a[i] % j;
                    int q = j % 2;
                    // cout << p << ' ' << q << '\n';
                    if (p != q)
                    {
                        swap(a[i], a[j]);
                        ans++;
                        break;
                    }
                }
            }
        }
    }
    int one = 0, zero = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
            one++;
        else
            zero++;
    }
    if (n % 2 == 0 and zero == one)
    {
        cout << ans << '\n';
    }
    else if (n % 2 == 1 and zero > one and (zero - one) == 1)
        cout << ans << '\n';
    else
        cout << -1 << '\n';
}

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
}
