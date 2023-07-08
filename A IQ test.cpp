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
    int p;
    int n;
    cin>>n;
    int arr[n],c;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    // sort(arr, arr+n);
    for(int i=1; i<=n; i++)
    {
     
        int a= arr[i];
        int b = arr[i+1];
        if(a>b && b%a!=0)
        {
            cout<<i<<endl;
            break;
        }
        else if(b>a && b%a!=0)
        {
            c = i+1;
            cout<<c<<endl;
            break;
        }
    }
}
