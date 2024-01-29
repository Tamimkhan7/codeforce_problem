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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    map<int, int> mp, xx;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        v.push_back(x);
    }
    int cnt = 0;
    if (mp.size() >= k)
    {
        cout << "YES" << '\n';
        for (int i = 0; i < n; i++)
        {
            int flag = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] == v[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0 and cnt < k)
            {
                cnt++;
                cout << i + 1 << ' ';
            }
        }
        // cout << cnt << '\n';
        cout << '\n';
    }
    else
        cout << "NO" << '\n';
}
