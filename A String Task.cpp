#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss,sp;
    cin>>s;
    int n = s.size();

    for(int i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            ss += s[i]+32;
        else ss += s[i];
    }
    for(int i=0; i<n; i++)
    {
        if(ss[i]=='a' || ss[i]=='e' || ss[i]=='i' || ss[i]=='o' || ss[i]=='u' || ss[i]=='y')continue;
        else sp += ss[i];
    }
    int len = sp.size();
    for(int i=0; i<len; i++)
    {
        cout<<"."<<sp[i];
    }
    cout<<'\n';

}
