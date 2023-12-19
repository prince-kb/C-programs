
#include <stdio.h>
int flue (int a){for (int i = 0; i < a; i++)
{
    printf("%c",'*');
}
}
int main()
{
    int p;
    printf("Type the number of stars to be printed\n");
    scanf("%d",&p);
    flue(p);
    return 0;
}
