#include <stdio.h>
#include <string.h>
int count=0;
void swap(char *x, char *y)
{
char temp;
temp = *x;
*x = *y;
*y = temp;
}
void permutation(char s[], int l, int r)
{
if (l == r)
{
puts(s);
count++;
}
else
{
for (int i = l; i <= r; i++)
{
swap(&s[l], &s[i]);
permutation(s, l+1, r);
swap(&s[l], &s[i]);
}
}
}
int main()
{
char str[100];
printf("Enter Expression: ");
gets(str);
int n = strlen(str);
permutation(str, 0, n-1);
printf("\nTotal Permutation:%d\n",count);
return 0;
}