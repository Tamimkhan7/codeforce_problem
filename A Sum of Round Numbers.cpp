#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll c = 0;
        if (n <= 10)
        {
            cout << 1 << endl;
            cout << n << endl;
        }
        else if (n < 100)
        {
            k = n % 10;
            n = n - k;
            if (k == 0)
            {
                cout << 0 << endl;
                cout << n << endl;
            }
            else
            {
                cout << k << endl;
                cout << n << endl;
            }
        }
        else
        {
            while (n != 0)
            {
                k = n % 100;
                n = n - k;
                if (n % 100 == 0)
                {
                    break;
                }
                cout << k << endl;
                cout << n << endl;
            }
        }
    }
}
