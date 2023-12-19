// SUM OF DIGITS OF A NUMBER

#include <stdio.h>
int main()
{
    int a,b; 
    int sum = 0;
    printf("Type the number\n");
    scanf("%d",&a);
     while (a!= 0)
     {
        b = a%10;
        // printf("%d\n",b);
        a = a/10;
        // printf("%d\n",a);
        sum = sum + b;   
     }
     
printf("%d\n",sum);
return 0;
}