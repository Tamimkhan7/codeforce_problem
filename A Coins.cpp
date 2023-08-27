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
    int n, k;
    cin >> n >> k;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        int p = 2 * i + k * i;
        if (p == n)
        {
            cout << i << endl;
            c++;
            break;
        }
    }
    cout << c << endl;
    if (c != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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