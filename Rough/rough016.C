//not working malloc function
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    ptr = (int *)calloc(2 , sizeof(int));
    // printf("Type n\n");
    // scanf("%d",&n);
    for (int i = 0; i < 4; i++)
    {
        printf("Type %dth number\n",i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d=%d\n",i,ptr[i]);
    }
return 0;
}