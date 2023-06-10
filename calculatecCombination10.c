#include <stdio.h>
int NCR (int n, int r)
{
if (r == 0 || n == r)
{
return 1;
}
else
return NCR (n - 1, r - 1) + NCR (n - 1, r);
}
int main ()
{
int n,r;
printf("Enter a number n: ");
scanf("%d",&n);
printf("Enter a number r: ");
scanf("%d",&r);
printf("\nValue of %dC%d = %d\n",n,r, NCR (n, r));
}