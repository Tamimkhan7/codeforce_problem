#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    int ans=0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ans++;
            break;
        }
    }
        if(ans)return false;
        else return true;
}
int main()
{
    int a;
    cin>>a;
    if(a%2==0)
    {
        int x = a/2;
        if(is_prime(x))
        {
            cout<<x-1<<' '<<x+1<<'\n';
        }
        else
        {
            cout<<x<<' '<<x<<'\n';

        }
    }
    else
    {
        int x = a/2;
        int y = (a/2)+1;
        if(is_prime(x)==0 && is_prime(y)==0)
        {
            cout<<x<<' '<<y<<'\n';
            return 0;
        }
        while((is_prime(x)== false) || (is_prime(y)== false))
        {
            x--;
            y++;
            // cout<<x<<' '<<y<<'\n';
            if((is_prime(x)== false) && (is_prime(y)== false))
            {
                cout<<x<<' '<<y<<'\n';
               return 0;
            }
        }
    }
}
