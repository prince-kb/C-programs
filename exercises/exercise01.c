// Multiplication table
#include <stdio.h>
int main()
{
    int i,a,b;
    printf("Enter the number you want multiplication table of\n");
    scanf("%d",&a);
    printf("Enter the number upto which you want multiplication table\n");
    scanf("%d",&b);
    for ( i = 1; i <=b; i++)
    {
        printf("%dx%d=%d\n" ,a, i , a*i);
    }
    
    return 0;
}
