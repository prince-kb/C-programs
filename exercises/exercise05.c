//To reverse the elements of the array
#include <stdio.h>
int main()
{
    int i,n;
    printf("Type the number of terms of the array\n");
    scanf("%d",&n);
int vir [100];
for (int i = 0; i < n; i++)
{
printf("Type the %dth element of the array\n",i);
scanf("%d",&vir[i]);
}
int k;
k=n-1;
printf("The reverse order of the elements of the array is\n");
printf("\n");
for (int i = k; i >= 0; i--)
{
    printf("%d\n",vir[i]);
}
return 0;
}
// OR this(not yet completed)
// int i,p,n,k;
// int arr[100];
// void rev(int arr[]){for (int i = 0; i < n/2; i++)
// {
// arr[i]= k;
// arr[i] = arr[n-i];
// arr[n-i] = k;
// }

// };
// int main()
// {
   
    
//     printf("Type the number of elements of the array\n");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//             printf("Type the %dth element of the array\n",i);
//             scanf("%d",&arr[i]);

//     }
//     void rev(int arr[]);
    
//    for (int i = 0; i < n; i++)
//    {
//        printf("The %dth element of the array is %d\n",i,arr[i]);
//    }
   
    
// return 0;
// }