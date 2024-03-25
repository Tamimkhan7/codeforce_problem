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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (is_sorted(all(v)))
    {
        cout << "YES" << '\n';
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 9)
        {
            int ab = v[v.size() - 1];
            for (int j = v.size() - 1; j > i + 1; j--)
                v[j + 1] = v[j];

            int x = v[i] % 10;
            int y = v[i] / 10;

            v.erase(v.begin() + i);
            v.insert(v.begin() + i, y);
            v.insert(v.begin() + i + 1, x);
            v.push_back(ab);
            if (is_sorted(all(v)))
            {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
