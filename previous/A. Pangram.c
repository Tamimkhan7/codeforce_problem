#include <stdio.h>
#include <string.h>
#include <conio.h>
int main ()
{
    int n,i, length;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", &arr);
    length = strlen(arr);
    for (i=0; i<length; i++)//12
    {
        if (arr[i] >= '65' || arr[i] <= '122')
        {
            printf("YES\n");
            break;
        }
        else
        {
            printf("NO\n");
            break;
        }
    }
    return 0;
}
