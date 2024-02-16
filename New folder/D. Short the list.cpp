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
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
    {
        string x = a.first;
        string y = b.first;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] < y[i])
                return b.first > a.first;
            else if (x[i] > y[i])
                return a.first > b.first;
        }
    }
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v;
    vector<string> vv;
    map<string, int> mp;
    vector<pair<string, int>> ans;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        vv.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        int a = v[i];
        string b = vv[i];
        ans.push_back(make_pair(b, a));
    }
    sort(all(ans), cmp);
    sort(ans.rbegin(), ans.rend());
    for (auto [x, y] : ans)
        cout << x << ' ' << y << '\n';
}