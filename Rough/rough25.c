#include <stdio.h>
#include <string.h>
int main()
{
    int n,num[10];
    float z;
printf("\nType the number of numbers to find the average\n");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    printf("Type the %d number\n",i+1);
    scanf("%d",&num[i]);
}
for (int i = 0; i < n-1; i++)
{
    z=num[i]+num[i+1];
}

    printf("%0.3f\n",z/n);

return 0;
}