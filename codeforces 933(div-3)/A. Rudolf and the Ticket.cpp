#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve(){
int n,m,k;cin>>n>>m>>k;
vector<int>v(n),vv(m);
for(int i=0; i<n; i++)cin>>v[i];
for(int i=0;i<m; i++)cin>>vv[i];
int ans=0;
for(int i=0; i<n; i++){
    for(int j=0; j<m;j++){
        if((v[i]+vv[j])<=k)ans++;
    }
}
cout<<ans<<'\n';
}
int32_t main()
{
    MTK;
int t;cin>>t;
while(t--)solve();
}