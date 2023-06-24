#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
int main()
{
    int n;
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int c = 0, k = 0, p = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 4)
        {
            c++;
        }
        else if (arr[i] == 3)
        {
            k++;
        }
        else if (arr[i] == 2)
        {
            p++;
        }
        else
        {
            q++;
        }
    }
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    int b, w, z, r;
    b = p * 2 + q * 1;
    w = b / 4;
    r = b % 4;
    if (p < 2 && q == 0)
    {
        w = p;
    }
    else if (r <= k)
    {
        k = k;
    }
    else if (b % 4 != 0)
    {
        w++;
    }
    z = w + c + k;
    cout << z << endl;
}
