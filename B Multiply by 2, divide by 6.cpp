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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        ll p = n * 2;
        ll q = p / 6;
        // cout << q << endl;
        if (p < 3)
        {
            cout << 0 << endl;
        }
        else if (p == 6)
        {
            cout << 2 << endl;
        }
        else if (q < 6)
        {
            cout << -1 << endl;
        }
        else if (p % 6 == 0)
        {
            while (p != 0)
            {
                if (p == 1)
                {
                    break;
                }
                else
                {
                    p = p / 6;
                    c++;
                    if (p % 6 != 0)
                    {
                        p *= 2;
                    }
                }
            }

            cout << c + 1 << endl;
        }
    }
}
