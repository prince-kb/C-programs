#include <stdio.h>
//To rearrange an array
int main()
{
    int a,b,c;
printf("\nEnter the number the elements of array\n");
scanf("%d",&a);
int array[a+1];
for (int i = 0; i < a; i++)
{
    printf("Enter the %d element\n",i+1);   
    scanf("%d",&array[i]);
}
for (int i = 0; i < a; i++)
{
    printf("%d ",array[i]);
}
printf("Enter the number to be inserted\n");
scanf("%d",&b);
printf("Enter the position at which number is to be inserted\n");
scanf("%d",&c);
for (int i = a; i > c; i--)
{
    array[i] = array[i-1];
}
array[c] = b;
for (int i = 0; i <= a; i++)
{
    printf("%d ",array[i]);
}
return 0;
}