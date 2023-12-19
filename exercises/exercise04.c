#include <stdio.h>
int poi (int a)
    { for (int i = 0; i < a; i++)
{
    printf("%c",'*');
}
}

int main()
{
    int j,l;
    
printf("For increasing star tree press 1\n");
printf("For decreasing star tree press 2\n");
scanf("%d",&l);


switch (l)
{
case 1:
printf("The triangular star series will be printed upto\n");
scanf("%d", &j);
    for (int i = 0; i <= j; i++)
    {
        poi (i);
        printf("\n");
    }
    break;
    case 2:
    printf("The triangular star series will be printed upto\n");
scanf("%d", &j);
    for (int i = j; i >= 0; i--)
    {
        poi (i);
        printf("\n");
    }
    break;

default:
    printf("Wrong input");
}
  
    return 0;
}
