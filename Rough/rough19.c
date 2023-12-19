//To print factorial of any number
#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    int g;
printf("\nType the number to get it's factorial\n");
scanf("%d",&a);
printf("The factorials of %d are:",a);
for (int g = 2; g < a; g++)
{
   if (a%g == 0)
   {
       printf("%d ",g);
   }
}
return 0;
}