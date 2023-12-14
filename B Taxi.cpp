#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    faster;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a, a+n);
    int four=0, three=0, two=0, one=0;
    for(int i=0; i<n; i++)if(a[i]==4)four++;
        else if (a[i]==3)three++;
        else if(a[i]==2)two++;
        else one++;
    int ans=0;
    while(three>0)
    {
        ans++;
        if(one>0)one--;
        three--;
    }
    while(two>0)
    {
        ans++;
        if(one>0)
        {
            one-=2;
            two--;
        }
        else
        {
            two-=2;
        }
    }
    //cout<<one<<' '<<two<<' '<<three<<' '<<four<<'\n';
    int res;
    if(one>0)
    {
        if(one%4==0)
            res = one/4;
        else
        {
            res = one/4;
            res++;
        }

        cout<<ans+four+res<<'\n';
    }
    else cout<<ans+four<<'\n';
}
