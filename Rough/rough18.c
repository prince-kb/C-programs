// Printing even/odd numbers between two numbers
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c;
    printf("\nType first and last number\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("To get even numbers press 1\n");
    printf("To get odd numbers press 2\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
    {
        if (a % 2 == 0)
    {
        int i = a + 2;
        do
        {
            printf("%d ", i);
            i = i + 2;
        } while (i <= b - 1);
    }
    else
    {
        int i = a + 1;
        do{
            printf("%d ", i);
            i = i + 2;
        } while (i <= b - 1);
    }
    break;
    }
    case 2:
    {
        if (a % 2 == 0)
    {
        int i = a + 1;
        do
        {
            printf("%d ", i);
            i = i + 2;
        } while (i <= b - 1);
    }
    else
    {
        int i = a + 2;
        do{
            printf("%d ", i);
            i = i + 2;
        } while (i <= b - 1);
    }
    }
    break;
    }
    

    return 0;
}