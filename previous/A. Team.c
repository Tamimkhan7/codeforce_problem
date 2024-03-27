#include <stdio.h>
int main ()
{
    int i, t, n,k=0, a,b,c;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a==1 && b==1)
        {
            k++;
        }
        else if(c==1 && a==1)
        {
            k++;
        }
        else if(c==1 && b==1)
        {
            k++;
        }

    }
    printf("%d\n", k);


    return 0;
}
