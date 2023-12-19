
#include <stdio.h>
int main()
{
    int a=7;
    int *o = &a;
    printf("%d\n",a);
    printf("%d\n",*o);
    int blow[] = {4,7,8,2,5};
    int *glow = &blow;
    printf("%d\n",blow[3]);
    printf("%d\n",*glow+2);
    return 0;
    }

