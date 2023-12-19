#include <stdio.h>
int main()
{
    int a,b;
printf("Enter first number");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);
a = a-b; b = a+b; a = b-a;
printf("After swapping :");
printf("%d %d\n",a,b);
return 0;
}