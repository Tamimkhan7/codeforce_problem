#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int T, X, Y, minimum,i;
    scanf("%d", &T);
    for (i=1; i<=T; i++)
    {
        scanf("%d %d", &X, &Y);

       minimum = abs(X-Y);
       printf("%d\n", minimum);
    }


    return 0;
}
