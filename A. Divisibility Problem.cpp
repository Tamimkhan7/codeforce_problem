#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,v,k,u,l,q,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            v = a%b;
            cout<<v<<endl;
        }
        else if(a>b)
        {
            if(a%b !=0)
            {
                k = a%b;
                if(b>k)
                {
                    if(b%k==0)
                    {
                        cout<<k<<endl;
                    }
                    else
                    {
                        u = a/b;
                        l= (1+u)*b;
                        q = abs(l-a);
                        cout<<q<<endl;
                    }
                }
            }
        }
        if(a<b)
        {
            y = abs(a-b);
            cout<<y<<endl;
        }

    }
}
