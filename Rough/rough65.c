#include <stdio.h>
void get(int arr[],int a){
    printf("\nEnter the elements of the array: " );
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
}
void printArray(int arr[],int a){
    printf("\n");
    for(int i=0;i<a;i++)
printf("|%d|  ",arr[i]);
}
void reverseArray(int arr[],int a){
    int start=0,end=a-1;
    while(start<=end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++,end--;
    }
}
int main(){
    int arr[25],a;
    printf("\nEnter number of elements of the array: ");
scanf("%d",&a);
get(arr,a);
printArray(arr,a);
reverseArray(arr,a);
printArray(arr,a);
return 0;
}