#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),v;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        // sum += a[i];
    }
    sort(a.rbegin(),a.rend());

    for(int i=0; i<n; i+=2)
    {
        int x = a[i+1]-a[i];
        v.push_back(x);
    }
    for(int i=0; i<v.size(); i++)
    {
        sum += v[i];
    }

    if(sum%2==0)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
int main()
{
    faster;
    solve();
}
