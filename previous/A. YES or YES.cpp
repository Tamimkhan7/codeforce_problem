#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{

    int length, i, n, j,t;
    cin>>t;
    cin>>n;
    char S[n];
    for(i=1; i<=t; i++)
    {
        cin>>S;
        S[n]=toupper(S[n]);

        if("YES" == S[n])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        // printf("\n");
    }



    return 0;
}
