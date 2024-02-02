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
void solve(vector<ll> v, vector<ll> a, int n)
{
    int ans = 0;
    vector<ll> f_ans;
    for (int i = 0; i < n; i++)
    {
        ll x = a[i], z = -1;
        f_ans.push_back(x);
        x = x / 3;
        for (int j = 0; j < n; j++)
        {

            ll y = a[j];
            if (x == y)
            {
                f_ans.push_back(y);
                y /= 3;
                j -= 1;
            }
            else
            {
                if (z > 0)
                    x = z / 3;

                if ((x == y) and (f_ans.size() <= n))
                {
                    f_ans.push_back(y);
                    y *= 2;
                    for (int k = 0; k < n; k++)
                    {
                        z = a[k];
                        if ((y == z) and (f_ans.size() <= n))
                        {
                            f_ans.push_back(y);
                            // for (auto x : f_ans)
                            //     cout << x << ' ';
                            // cout << '\n';
                            y = z;
                            y *= 2;
                            k = -1;
                        }
                    }
                    j = -1;
                }
            }
        }
        if (f_ans.size() == n)
        {
            for (auto x : f_ans)
                cout << x << ' ';
            cout << '\n';
            return;
        }
        f_ans.clear();
    }
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<ll> v(n), a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        a[i] = v[i];
    }
    sort(all(v), greater<ll>());
    sort(all(a), greater<ll>());0
    // for (auto x : a)
    //     cout << x << ' ';
    // cout << '\n';
    solve(v, a, n);
}