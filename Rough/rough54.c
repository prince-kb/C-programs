//Transposing a matrix
#include <stdio.h>
int show(int a,int b,int arr[a][b]){
for (int i = 0; i < a; i++){
    for (int j = 0; j < b; j++)
        printf("%d\t",arr[i][j]);
        printf("\n");
    }}
int main(){
    int a,b;
printf("\nEnter the number of rows and columns: ");
scanf("%d %d",&a,&b);
int arr1[a][b],arr2[b][a];
printf("Enter the elements of the array\n");
for (int i = 0; i < a; i++){
    for (int j = 0; j < b; j++)
        scanf("%d",&arr1[i][j]);
}
printf("Before transposing\n");
show(a,b,arr1);
for (int i = 0; i < a; i++){
    for (int j = 0; j < b; j++)
    arr2[j][i] = arr1[i][j];
}
printf("After transposing\n");
show(b,a,arr2);


return 0;
}