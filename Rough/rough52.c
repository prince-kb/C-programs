//Increasing order sorting and deletion of a specific element of an array
#include <stdio.h>
int store(int arr[],int a){
    printf("Enter the elements of the array\n");
    for (int i = 0; i < a; i++)
        scanf("%d",&arr[i]);
    return arr[a];
}
int show(int arr[],int a){
    for (int i = 0; i < a; i++)
        printf("%d ",arr[i]);
}
int delete(int arr[],int a,int c){
    for (int i = c; i < a-1; i++)
        arr[i]=arr[i+1];
        a--;
        return arr[a];
}
int main(){
    int a,b,c=100;
printf("\nEnter number of elements of array: ");
scanf("%d",&a);
int arr[a];
store(arr,a);
printf("\nSorting in ascending order we will get\n");
for (int i = 0; i < a-1; i++){
    for (int j = 0; j < a-1; j++){
        if (arr[j]>arr[j+1]){
        int temp;
        temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }}}
show(arr,a);
printf("\nEnter the element to delete: ");
scanf("%d",&b);
for (int i = 0; i < a; i++){
    if (b == arr[i]){
        c=i;
        delete(arr,a,c);
        a--;
        printf("After deletion\n");
        show(arr,a);
        break;
    }}
if (c>99)
    printf("Element not found\n");
return 0;
}