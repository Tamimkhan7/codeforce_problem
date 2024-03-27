#include <stdio.h>
#include <string.h>
int main ()
{
    int  i, n,s=0;
    char x[5];
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%s", &x);

        if ((strcmp(x, "X++")==0) || (strcmp(x, "++X")==0))

        {
            s= s+1;
        }
        else if((strcmp(x, "X--")==0) || (strcmp(x, "--X")==0))
        {
            s = s-1;
        }
    }
    printf("%d\n", s);

    return 0;
}



