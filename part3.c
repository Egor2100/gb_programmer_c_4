#include <stdio.h>
int main(int argc, char **argv)
{
int a;
    scanf("%d", &a);
    while (a>0)
    {
        if ((a%10)%2 !=0)
        {
            printf ("NO");
            return 0;
        }
        a/=10;
    }
    printf("YES");
    return 0;
}