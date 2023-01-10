#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0)j; cin.tie(0);cout.tie(0);
#define all(x).begin , (x).end()
#define endl "\n"
#define pb push_back
#define lc (n*2)
#define rc (n*2)+1
#define mid (e+b)/2
int main()
{
    long long int k,l,m,res, res2;
    cin>>k>>l>>m;

    res = k*l;
    if(res%m==0)
    {
        res2 = res/m;
        cout<<res2<<endl;
    }
    else if(res%m !=0)
    {
        res2 = res/m;
        cout<<res2+1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}
