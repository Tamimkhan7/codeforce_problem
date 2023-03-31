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
    ll t;
    cin >> t;
    while (t--)
    {
        faster;
        ll n, sum = 0, k = 0, c = 0;
        cin >> n;
        n = n * 2;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            c++;
            sum += arr[i];
            if (c % 2 == 0)
            {
                if (sum % 2 != 0)
                    k++;                 
                       
            }
        }
        if (k == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
//pore solve korbo