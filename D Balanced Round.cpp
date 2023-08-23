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
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        int c = 0, r = -1, p;
        for (int i = 0; i < n - 1; i++)
        {
            p = arr[i + 1] - arr[i];
            // cout << p << endl;
            if (p <= k)
            {
                c++;
            }
            else
            {
                if (r < c)
                {
                    r = c;
                }
                c = 0;
            }
        }
        if (r < c)
        {
            r = c;
        }

        if (n == 1)
            cout << 0 << endl;
        else
            cout << n - (r + 1) << endl;
    }
    return 0;
}