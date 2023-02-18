#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    int len = s.size();
    for(int i=0; i<len; i++)
    {
        if(len == 1)
        {
            if(s[i] == '4' || s[i] == '7' )
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(s[i] == '4')
            {
                c++;
            }
            else if(s[i] == '7')
            {
                c++;
            }
        }
    }
    if(len>1)
    {
        if(len==c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
