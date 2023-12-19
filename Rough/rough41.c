//Bubble,selectionn and insertion sort

// 1>Bubble Sort
// #include <stdio.h>
// int sort1(int[],int);
// int sort2(int[],int);
// int sort1(int array[],int n){
// printf("BEFORE: ");
// for (int i = 0; i < n; i++)
//     printf("%d ",array[i]);
// for (int i = 0; i < n; i++){
//     for (int j = 0; j < n; j++){
//         if(array[j]>array[j+1]){
//             int temp;
//             temp = array[j];
//             array[j] = array[j+1];
//             array[j+1] = temp;
//             break;
//         }}}
//         printf("\nAFTER: ");
// for (int i = 0; i < n; i++)
//     printf("%d ",array[i]);
// }
// int sort2(int array[],int n){
//         printf("BEFORE: ");
// for (int i = 0; i < n; i++)
//         printf("%d ",array[i]);
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             if (array[j]<array[j+1]){
//                 int temp;
//                 temp = array[j+1];
//                 array[j+1] = array[j];
//                 array[j] = temp;
//                 break;
//             }}}
//         printf("AFTER\n");
// for (int i = 0; i < n; i++)
//     printf("%d ",array[i]);
// }
// int main()
// {
//     int n,a;
// printf("\nEnter number of elements of the array\n");
// scanf("%d",&n);
// int array[n];
// for (int i = 0; i < n; i++){
//     printf("Enter %d element\n",i);
//     scanf("%d",&array[i]);
// }
// printf("For ascending order press 1\n");
// printf("For descending order press 2\n");
// scanf("%d",&a);
// switch(a){
//     case 1:sort1(array,n);
//     case 2:sort2(array,n);
// }
// return 0;
// }

// 2>Selection sort
