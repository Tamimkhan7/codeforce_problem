#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s,sum;
    while(t--)
    {
        cin>>s;
        sum += s;
    }
    int c=0;
    cout<<sum<<endl;
    int len = sum.size();
    for(int i=0; i<len; i++)
    {
        if(i==0)
        {
            if(sum[i] != sum[i+1] &&sum[i+1] != sum[i+2] )
            {
                c++;
            }
        }
        else
        {
            if(sum[i-2] != sum[i-1]&& sum[i-1] != sum[i] && sum[i] != sum[i+1] && sum[i+1] != sum[i+2])
            {

                c++;
            }
        }
    }

    cout<<c<<endl;

}
