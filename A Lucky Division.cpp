#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%4==0 ||  n%7==0 ||  n%47==0 ||  n%744==0 ||n%74==0 ||  n%77==0 || n%44==0)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        string s;
        s = to_string(n);
        int len = s.size();
        int ans=0;
        for(int i=0; i<len; i++)
        {
            string ss;
            ss = s[i];
            int x = stoi(ss);
            if(x== 4 ||x == 7)ans++;
        }
        if(ans==len)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
