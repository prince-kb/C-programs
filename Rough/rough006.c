// To find addition and sutraction of two numbers
#include <stdio.h>
int jod (int i,int j){return (i+j);}
int ghata(int i,int j){return (i-j);}

int main()
{
    int a,b;
    printf("Enter value a\n");
    scanf("%d",&a);
    printf("Enter value b\n");
    scanf("%d",&b);
    printf("a is now %d\n",jod(a,b));
    printf("b is now %d\n",ghata(a,b));

    return 0;
}
