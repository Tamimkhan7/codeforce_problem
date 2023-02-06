#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q;
    cin>>t;
    while(t--)
{
        int c=0,temp;
        cin>>n;
        while(n>0)
        {
            if(n%10 == 0)
            {
                n = n%10;
                c++;
                temp = n;
            }
            else
            {
                n = n/10;
                c++;
                temp = n;
            }
        }
        cout<<c<<endl;
        while(c--)
        {
            cout<<temp<<" ";
        }
        cout<<endl;
    }
}
