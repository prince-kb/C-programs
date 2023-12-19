#include <stdio.h>
int show(int arr[],int a){
    for (int i = 0; i < a; i++)
        printf("%d ",arr[i]);}
int main(){
    int a;
printf("\nEnter number of elements of the array: ");
scanf("%d",&a);
int arr[a];
printf("Enter the elements of the array\n");
for (int i = 0; i < a; i++)
    scanf("%d",&arr[i]);
int max1=arr[0],max2=arr[0];
for (int i = 0; i < a; i++){
    if (max1<arr[i]){
        max2=max1;
        max1 = arr[i];
    }}
    for (int i = 0; i < a; i++){
        if (arr[i]>max2&&arr[i]<max1)
            max2=arr[i];}
    
// show(arr,a);
printf("Max1= %d\nMax2=%d\n",max1,max2);

return 0;
}