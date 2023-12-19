#include <stdio.h>
int main(){

//1>
//     int a,sum;
//     float average;
// printf("\nEnter the number of elements\n");
// scanf("%d",&a);
// int array[a];
// for (int i = 0; i < a; i++){
//     printf("Enter the %d element\n",i);
//     scanf("%d",&array[i]);
// }
// for (int i = 0; i < a; i++){
//     sum = sum + array[i];
// }
// average = (float)sum/a;
// printf("SUM = %d\n",sum);
// printf("AVERAGE = %0.2f\n",average);

//2>
// int a,b,c;
// printf("Enter the number of elements\n");
// scanf("%d",&a);
// int array[a];
// for (int i = 0; i < a; i++){
//     printf("Enter the %d element\n",i);
//     scanf("%d",&array[i]);
// }
// c = array[0];
// for (int i = 0; i < a; i++){
//    if (array[i]>b){
//        b = array[i];
//    }}
// for (int i = 0; i < a-1; i++){
//     if (array[i+1]<c){
//         c = array[i+1];
//     }}
// printf("LARGEST = %d\n",b);
// printf("SMALLEST = %d\n",c);

// 3>
// int a,b=0,c;
// printf("Enter the number of elements\n");
// scanf("%d",&a);
// int array1[a];
// for (int i = 0; i < a; i++){
//     printf("Enter the %d element\n",i+1);
//     scanf("%d",&array1[i]);
// }
// for (int i = 0; i < a; i++){ 
//     if (array1[i] > b){
//         c = b;
//         b = array1[i];
//     }
// }
// for (int i = 0; i < a; i++){
//     printf("%d ",array1[i]);
// }
// printf("Largest = %d\n",b);
// printf("Second Largest = %d\n",c);

// 4>
// int a,b,c;
// printf("\nEnter the number the elements of array\n");
// scanf("%d",&a);
// int array[a+1];
// for (int i = 0; i < a; i++)
// {
//     printf("Enter the %d element\n",i);   
//     scanf("%d",&array[i]);
// }
// for (int i = 0; i < a; i++)
// {
//     printf("%d ",array[i]);
// }
// printf("Enter the number to be inserted\n");
// scanf("%d",&b);
// printf("Enter the position at which number is to be inserted\n");
// scanf("%d",&c);
// for (int i = a; i >= c; i--)
// {
//     array[i+1] = array[i];
// }
// array[c] = b;
// for (int i = 0; i <= a; i++)
// {
//     printf("%d ",array[i]);
// }

// 5>
// int a,b;
// printf("Enter the number of elements of the array\n");
// scanf("%d",&a);
// int array[a];
// for (int  i = 0; i < a; i++)
// {
//     printf("Enter the %d element\n",i+1);   
//     scanf("%d",&array[i]);
// }
// for (int i = 0; i < a; i++)
// {
//     printf("%d ",array[i]);     
// }
// printf("Enter the position of element you want to delete\n");
// scanf("%d",&b);
// for (int i = b; i < a; i++)
// {
//             array[i] = array[i+1]; 
// }
// for (int i = 0; i < a-1; i++)
// {
//     printf("%d ",array[i]);     
// }

// 6>
// int a,b,c;
// printf("Enter the number of elements of the array\n");
// scanf("%d",&a);
// int array[a+1];
// printf("\nEnter elements in ascending order\n");
// for (int i = 0; i < a; i++)
// {
//     printf("Enter the %d element \n",i);
//     scanf("%d",&array[i]);
// }
// printf("Enter the element you want to add in the sorted array\n");
// scanf("%d",&b);
// for (int i = 1; i < a-1; i++)
// {
//     if (b > array[i-1] && b < array[i+1])
//     {
//         c = i;
//     }
// }
// for (int i = a+1; i > c; i--)
// {
//     array[i] = array[i-1];
// }
// array[c] = b;
// for (int i = 0; i <= a; i++)
// {
//     printf("%d ",array[i]);
// }

// 7>
// int a,b;
// printf("Enter the number of elements of array\n");
// scanf("%d",&a);
// int array[a];
// for (int i = 0; i < a; i++)
// {
//     printf("Enter the %d element\n",i+1);
//     scanf("%d",&array[i]);
// }
// printf("Enter the number you want to find\n");
// scanf("%d",&b);
// for (int i = 0; i < a; i++)
// {
//     if (b == array[i])
//     {
//         printf("%d found at %d position\n",b,i+1);
//         goto end;
//     }
// }
// printf("%d not found\n",b);
// end:

// 8>
// int a,b=0,c,d,e;
// printf("Enter the number of elements of the array in ascending order\n");
// scanf("%d",&a);
// int array[a];
// for (int i = 0; i < a; i++)
// {
//     printf("Enter the %d element\n",i);
//     scanf("%d",&array[i]);
// }
// c = 0,d = a-1;e = (int)(d-c)/2;
// printf("%d\n",array[d]);
// printf("Enter the number you want to search\n");
// scanf("%d",&b);
// if (b == array[e])
// {
//     printf("%d found at %d position\n",b,e);
// }
// else if (b < array[e])
// {
//     while(e>=0){
//         e--;
//         if (b == array[e])
//         {
//             printf("%d found at %d position\n",b,e);
//             break;
//         }
//     }
// }
// else if(b > array[e]){
//     while(e<=a){
//         e++;
//         if (b == array[e])
//         {
//             printf("%d found at %d position\n",b,e);
//             break;
//         }
//     }
// }
// else printf("%d not found\n",b);

// 9>
// int m,n,total,e;
// float clav;
// printf("Enter the number of students\n");
// scanf("%d",&m);
// printf("Enter the number of subjects\n");
// scanf("%d",&n);
// int marks[m][n];
// for (int i = 0; i < m; i++)
// {
//     for(int j = 0;j<n;j++){
//         printf("Enter the marks of student%d in subject %d\n",i,j);
//         scanf("%d",&marks[i][j]);
//     }
// }
// for (int i = 0; i < m; i++)
// {
//     for(int j = 0;j<n;j++){
//         printf("The marks of student%d in subject %d is %d\n",i,j,marks[i][j]);
//     }
// }
//  for (int i = 0; i < m; i++)
// {
//     total = 0;
//     for (int j = 0; j < n; j++)
//     {
//         total = total + marks[i][j];
//     }
//     printf("Total marks of student%d is %d\n",i,total);
//     printf("Average marks of student%d is %0.2f\n",i,(float)total/n);
//     printf("\n");
//     clav = clav + (float)total/n;
// }
// printf("Class average is %0.2f\n",clav/m);
// for (int j = 0; j < n; j++)
// {
//     e = 0;
//     for (int i = 0; i < m; i++)
//     {
//         if (e<marks[i][j])
//         {
//             e = marks[i][j];
//         }
//     }
//     printf("Highest marks in subject%d is %d\n",j,e);
// }

// 10>
int m,n,o,p;
printf("Enter the number of rows of the matrix\n");
scanf("%d",&m);
printf("Enter the number of columns of the matrix\n");
scanf("%d",&n);
int mat1[m][n],mat2[m][n],mat3[m][n];
printf("Enter the elements of first matrix\n");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("Enter the %d,%d element\n",i,j);
        scanf("%d",&mat1[i][j]);
    }
}
printf("Enter the elements of second matrix\n");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("Enter the %d,%d element\n",i,j);
        scanf("%d",&mat2[i][j]);
    }
}
printf("\nFor matrix addition,type 1\n");
printf("For matrix subtraction,type 2\n");
printf("For matrix multiplication,type 3\n");
scanf("%d",&o);
printf("\n");
if (o == 1)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ",mat3[i][j]);
        } 
        printf("\n");
    }
}
else if (o == 2)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d ",mat3[i][j]);
        } 
        printf("\n");
    }
}
else if (o == 3){
    for (int k = 0; k < m; k++){
    for (int l = 0; l < n; l++){
     for (int i = 0; i < m; i++){ 
     p = 0;
    for (int j = 0; j < n; j++){
        p = p + mat1[i][j] * mat2[j][i];
    }
}
 mat3[k][l] = p;
    }
}
for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
        printf("%d ",mat3[i][j]);
    }
    printf("\n");
}
}
else printf("Wrong input\n");

return 0;
}