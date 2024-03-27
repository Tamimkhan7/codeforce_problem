#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{
    char S[500];
    int length, i, n, j;
    cin>>n;

    for(i=0; i<n; i++)
    {
       cin>>S;

        if((towlower(S))=="yes")
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
