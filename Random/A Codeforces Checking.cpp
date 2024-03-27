#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ss = "codeforces";
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        for(int j=0; j<s.size(); j++)
        {
            for(int i=0; i<ss.size(); i++)
            {
                if(ss[i]== s[j])
                {
                    c++;
                    break;
                }
            }
        }
        if(c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
