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
bool divided_by_three(ll x, ll y)
{
    if (x / 3 == y)
        return true;
    else
        return false;
}
bool multiply_by_two(ll x, ll y)
{
    if (x * 2 == y)
        return true;
    else
        return false;
}
void print(vector<ll> ans)
{
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
}
void solve(vector<ll> v, vector<ll> a, int n)
{
    // print(v);
    for (int i = 0; i < v.size(); i++)
    {
        vector<ll> ans;
        ll x = v[i];
        for (int j = 0; j < v.size(); j++)
        {
            ll y = v[j];
            if (x != y)
            {
                if (divided_by_three(x, y))
                {
                    auto it = find(all(ans), y);
                    if (it != ans.end())
                    {
                        if (ans.empty())
                        {
                            ans.push_back(x);
                            ans.push_back(y);
                            x = y;
                            print(ans);
                        }
                        else
                        {
                            ans.push_back(y);
                            x = y;
                            print(ans);
                        }
                    }
                }
                if (multiply_by_two(x, y))
                {
                    auto it = find(all(ans), y);
                    if (it != ans.end())
                    {
                        if (ans.empty())
                        {
                            ans.push_back(x);
                            ans.push_back(y);
                            x = y;
                            print(ans);
                        }
                        else
                        {
                            ans.push_back(y);
                            x = y;
                            print(ans);
                        }
                    }
                }

                // if (ans.size() == n)
                // {
                for (auto x : ans)
                    cout << x << ' ';
                cout << '\n';
                // return;
                // }
            }
        }
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
    sort(all(a), greater<ll>());
    solve(v, a, n);
}