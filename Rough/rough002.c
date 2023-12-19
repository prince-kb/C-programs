// How to use 1-D and 2-D arrays

#include <stdio.h>
int main(){
    int p,q;
    printf("For 1-D array press 1\n");
    printf("For 2-D array press 2\n");
    scanf("%d", &p);
    if (p == 1)
    {
        printf("Enter the number of elements of array\n");
        scanf("%d",&q);
        int value[q];
        printf("Enter the value of the element to be stored\n");
        for (int i = 0; i < q; i++)
        {
            printf("Enter the value of %d element\n", i);
            scanf("%d", &value[i]);
        }
        for (int i = 0; i < q; i++)
        {
            printf("The value of %d element is %d\n", i, value[i]);
        }
    }
    else if (p == 2)
    {
        int value[3][2] = {{9, 36}, {28, 7}, {11, 44}};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                // printf("The %d,%d element of the array is %d\n",i,j,value[i][j]);
                // printf("%d,%d=%d\n", i, j, value[i][j]);
                printf("%d ",value[i][j]);
            }
            printf("\n");
            }
        }
        return 0;
    }
