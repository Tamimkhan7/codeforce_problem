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
void sol(int a[], int n, int k, int mn)
{
    sort(a, a + n);
    reverse(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int x = a[i], y = a[i + 1], final_res = 0, cm = 1;
        while (cm < 20)
        {
            x++;
            y++;
            final_res += 2;
            int ans = 1;
            for (int j = 0; j < n; j++)
            {
                if ((a[i] != a[j]) || (a[i + 1] != a[j]))
                    ans *= a[j];
            }
            ans *= x;
            ans *= y;
            cm++;
            if (ans % k == 0)
            {
                mn = min(final_res, mn);
                break;
            }
        }
    }
    cout << mn << '\n';
}
void solve(int a[], int n, int k)
{
    int mn = 100;
    for (int i = 0; i < n; i++)
    {
        int x = a[i], final_res = 0, cm = 1;
        while (cm < 20)
        {
            x++;
            final_res++;
            int ans = 1;
            for (int j = 0; j < n; j++)
            {
                if (a[i] != a[j])
                    ans *= a[j];
            }
            ans *= x;
            cm++;
            if (ans % k == 0)
            {
                mn = min(final_res, mn);
                break;
            }
        }
    }
    sol(a, n, k, mn);
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        ll res = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            res *= a[i];
        }
        if (res % k == 0)
            cout << 0 << '\n';
        else
            solve(a, n, k);
    }
}