#include <stdio.h>
#include <string.h>
void ins(int arr[][50],int a,int b){
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++)
            scanf("%d",&arr[i][j]);
    }
}
void printArray(int arr[][50],int a,int b){
    printf("The elements of the matrix are: \n");
    for (int  i = 0; i < a; i++){
        for (int j = 0; j < b; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}
int main(){
    int a,b,arr1[50][50],arr2[50][50];
printf("\nEnter the number of rows and columns: ");
scanf("%d",&a);
scanf("%d",&b);
ins(arr1,a,b);
ins(arr2,a,b);
printArray(arr1,a,b);
printArray(arr2,a,b);
return 0;
}