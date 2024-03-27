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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' and b[i] == 'R')
                flag++;
            else if (a[i] == 'G' and b[i] == 'B')
                flag++;
            else if (a[i] == 'B' and b[i] == 'G')
                flag++;
            else if (a[i] == 'G' and b[i] == 'G')
                flag++;
            else if (a[i] == 'B' and b[i] == 'B')
                flag++;
            else
                flag = 0;
        }
        if (flag == n)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}