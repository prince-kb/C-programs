#include <stdio.h>
int show(int arr[],int a){
    for (int i = 0; i < a; i++)
    printf("%d ",arr[i]);
}
int main(){
    int a,d;
printf("\nEnter the number of elements of array: ");
scanf("%d",&a);
int arr[a];
printf("\nEnter the elements of the array\n");
for (int i = 0; i < a; i++)
    scanf("%d",&arr[i]);
    printf("Before insertion: ");
    show(arr,a);
while (1){
    int b,c,d;
    printf("\n1 for insertion\t2 for deletion\t3 for exit: ");
    scanf("%d",&d);
switch (d){
case 1:
printf("\nEnter the position to insert the element: ");
scanf("%d",&b);
printf("\nEnter the element: ");
scanf("%d",&c);
a++;
for (int i = a; i > b; i--)
    arr[i]=arr[i-1]; 
arr[b]=c;
show(arr,a);
    break;
case 2:
printf("\nEnter the position to delete the element: ");
scanf("%d",&b);
for (int i = b; i < a; i++)
    arr[i]=arr[i+1];
a--;
show(arr,a);
break;
case 3: goto end;
default: printf("Wrong input\n");
    break;
}}
end:

return 0;
}