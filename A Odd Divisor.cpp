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
    llu t;
    cin >> t;
    while (t--)
    {
        llu n, c = 0, i;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll w = ceil(sqrt(n));
            for (i = 2; i <= w; i++)
            {
                if (n % i == 0)
                {
                    if (i % 2 != 0)
                    {
                        c++;
                        break;
                    }
                }
            }

            if (c == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}
