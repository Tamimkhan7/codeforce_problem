#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    ll p = k * 2;
    for (int i = 1; i <= p; i++)
    {
        if (i % n != 0)
        {
            v.push_back(i);
        }
    }
    ll l = 0, r = p;
    // k -= n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (v[mid] == v[k])
        {
            cout << v[mid] << endl;
            return;
        }
        else if (v[mid] > v[k])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    // k -= n;
    // cout << v[k] << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}