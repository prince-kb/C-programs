#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(2 * sizeof(int));
for (int i = 0; i < 5; i++)
{
    printf("\nType the %d element of array\n",i);
scanf("%d",&ptr[i]);
}
for (int i = 0; i < 5; i++)
{
printf("The %d element is %d\n",i,ptr[i]);
}


return 0;
}