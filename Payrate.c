#include <stdio.h>
#include <stdlib.h>

int main ()
{
int a,b;
printf("How many hours did you work?\n");
scanf("%d",&a);
printf("How much do you get paid per hour?\n");
scanf("%d",&b);
int grossPay = a*b;
printf("Gross pay %d.\n",grossPay);
}
