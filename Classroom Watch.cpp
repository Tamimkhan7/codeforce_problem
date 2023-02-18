#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%10 !=0)
    {
        int q = n%10;
        cout<<q<<endl;
        int w = n/2;
        if(w-q>=q)
        {
            int p = w/2;
            int m = w+p;
            cout<<m<<endl;
        }
        else
        {
            cout<<w<<endl;
        }
    }
    else
    {
        int q = n%10;
        cout<<q<<endl;
    }
}
