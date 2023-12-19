#include <stdio.h>
int aalu(int arr[],int a){
int sump=0,sumn=0;
for (int i = 0; i < a; i++)
{
    if (arr[i]<0)
        sumn = sumn + arr[i];
        else sump = sump + arr[i];
}
    printf("Positive sum = %d\n",sump);
    printf("Negative sum = %d\n",sumn);
}
int main(){
    int a;
printf("\nEnter number of elements\n");
scanf("%d",&a);
int arr[a];
printf("Enter elements\n");
for (int i = 0; i < a; i++)
    scanf("%d",&arr[i]);
aalu(arr,a);
return 0;
}