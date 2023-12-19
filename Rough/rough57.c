#include <stdio.h>
int insert(int arr[],int a){
    for (int i = 0; i < a; i++)
        scanf("%d",&arr[a]);
}
int main(){
    int a,b;
printf("\nEnter the size of first array: ");
scanf("%d",&a);
printf("\nEnter the size of second array: ");
scanf("%d",&b);
int arr1[a],arr2[b],arr3[a+b];
printf("Enter the elements of first array\n");
insert(arr1,a);
printf("Enter the elements of second array\n");
insert(arr2,b);

return 0;
}