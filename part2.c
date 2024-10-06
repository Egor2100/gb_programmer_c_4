#include <stdio.h>
int main()
{
int a;
 scanf("%d", &a);
 a /= 100;
 printf("%s", a>=1 && a<=9 ? "YES" : "NO");
 return 0;
}