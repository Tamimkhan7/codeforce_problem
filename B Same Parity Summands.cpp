#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    if(k>n)cout<<"NO"<<endl;
    else if(n%k==0)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<k; i++)cout<<n/k<<" ";
        cout<<endl;
    }
    else
    {
        if(n%2)
        {
            int i=n/k;
            while(n>0)
            {
                v.push_back(i);
                n-=i;
                if(n!=i)i+=2;
            }
        }
        else
        {
            int i=n/k;
            while(n>0)
            {
                v.push_back(i);
                n-=i;
                if(n!=i)i+=2;
            }
        }
        if(v.size()==k)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
