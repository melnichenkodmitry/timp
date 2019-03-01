#include <stdio.h>
int main(void)
{
int n, a, b = 0, i;
scanf("%d", &n);
for(i = 0; i < n; i++)
{
scanf("%d", &a);
if(a < 0) b++;
}
printf("%d\n", b);
return 0;
}
