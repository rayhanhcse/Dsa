#include <stdio.h>
double pow(double base, double exponent);
int main()
{
double base, power;
int exponent;
printf("Enter base: ");
scanf("%lf", &base);
printf("Enter exponent: ");
scanf("%d", &exponent);
power = pow(base, exponent);
printf("%.2lf ^ %d = %.2lf", base, exponent, power);
return 0;
}
double pow(double base, double exponent)
{
if(exponent == 0)
return 1;
else if(exponent > 0)
return base * pow(base, exponent - 1);
else
return 1 / pow(base, -exponent);
}