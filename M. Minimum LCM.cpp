//wrong answer, after i will tying for the answer
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q = n%2;
        int w = n/2;
        int p = w-q;
        if(w==p)
        {
            cout<<w<<" "<<p<<endl;
        }
        else
        {
            int e = 2*p;
            if(e+p == n)
            {
                cout<<p<<" "<<e<<endl;
            }
            else
            {
                int v = e*w;
                cout<<p<<" "<<v<<endl;
            }
        }
    }

}
