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
    int k = 2, c = 0, x;
    cin >> x;

    if (x % 2 == 0)
    {
        for (int i = 2; i <= x; i + i)
        {
            if (x % i == 0)
            {
                cout << 1 << endl;
                break;
            }
        }
    }
    else
    {
        while (x != 0)
        {
            x = x - k;
            c++;
            k *= k;
        }
        cout << c << endl;
    }
}