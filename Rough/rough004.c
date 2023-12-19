// give the number and print it's factorial

#include <stdio.h>
int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a*factorial(a - 1);
    }
}

    int main()
    {
       int b;
        printf("Enter the number you want the factorial of\n");
        scanf("%d",&b);
        printf("The factorial of %d is %d\n",b ,factorial(b));
        return 0;
    }
