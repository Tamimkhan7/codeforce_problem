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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v), greater<int>());
    int sum = accumulate(all(v), 0);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int x = v[i];      
        if (sum == x)
        {
            cout << "YES" << '\n';
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "NO" << '\n';
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0 and v[i] != 0)
            odd++;
        else if (v[i] % 2 == 0 and v[i] != 0)
            even++;
    }
    cout << odd << ' ' << even << '\n';
    cout << v[1] << '\n';
    return 0;
}