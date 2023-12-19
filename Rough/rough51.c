#include <stdio.h>
int store(int arr[],int a){
    printf("Enter the elements of the array\n");
    for (int i = 0; i < a; i++)
        scanf("%d",&arr[i]);
        return arr[a];
}
int main(){
    int a,b,c,maxdif;
printf("\nEnter the number: ");
scanf("%d",&a);
int arr[a];
store(arr,a);
maxdif = arr[0];
for (int i = 0; i < a; i++){
    for (int j = 0; j < a; j++){
        if (maxdif<=(arr[i]-arr[j])){
            maxdif = arr[i]-arr[j];
            b=i;c=j;
        }
        else if (maxdif<=(arr[j]-arr[i])){
            maxdif=(arr[j]-arr[i]);
            b=j;c=i;}
        }}
        printf("Max difference is %d between %d element and %d element\n",maxdif,b,c);
return 0;
}