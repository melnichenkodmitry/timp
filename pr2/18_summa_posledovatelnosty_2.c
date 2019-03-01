#include <stdio.h>
int main()
{
int n, x, y = 0, i;
scanf("%d", &n);
for(i = 1; i <= n; i ++)
{
scanf("%d", &x);
y = x + y - i;
}
printf("%d\n", y);
return 0;
}
