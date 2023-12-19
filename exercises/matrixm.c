#include <stdio.h>
void ins(int a[][20],int n){
    printf("Enter the elements of matrix\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    }
}
void printArray(int a[][20],int n){
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("|\t");
        for (int j = 0; j < n; j++)
            printf("%d\t",a[i][j]);
        printf("|\n\n");
    }
}
void mmly(int a1[][20],int a2[][20],int a3[][20],int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int b=0;
        for (int k = 0; k < n; k++)
            b=b+a1[i][k]*a2[k][j];
        a3[i][j]=b;
    }
}
}
int main(){
    int n,a1[20][20],a2[20][20],a3[20][20];
printf("\nEnter the number of rows/columns of square matrix: ");
scanf("%d",&n);
printf("For Matrix 1\n");
ins(a1,n);
printf("For Matrix 2\n");
ins(a2,n);
printf("Matrices are:\n");
printf("Matrix 1-\n");
printArray(a1,n);
printf("Matrix 2-\n");
printArray(a2,n);
mmly(a1,a2,a3,n);
printf("Multiplied matrix is:\n");
printArray(a3,n);
return 0;
}