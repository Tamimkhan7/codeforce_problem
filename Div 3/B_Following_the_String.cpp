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
    string s;
    vector<int> frq(26, 0);
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        for (int j = 0; j < 26; j++)
        {
            if (frq[j] == p)
            {
                cout << (char)(j + 'a');
                frq[j]++;
                break;
            }
        }
    }
    cout << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
