//Set B

// 1>Reverse the string
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[50];
// printf("\nEnter the string\n");
// scanf("%s",&str);
// // printf("Reversed string is %s\n",strrev(str));
// puts(strrev(str));
// return 0;
// }

//2>Underscore seperstor and Camel case
// not completed
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[50];
// printf("\nEnter the variable name\n");
// scanf("%s",&str);
// int b = strlen(str);
// for (int i = 1; i < b-1; i++){
//     if (str[i] == '_'){
//         for (int j = 0; j < b-1; j++){
//             str[j] = str[j+1];}
//             str[b] == '\0';
//             if ((int)str[i] >= 65 && (int)str[i] <= 90){
//                str[i] = (int)str[i] + 34;}
// } }
// puts(str);
// printf("%s\n",str);
// return 0;
// }

//3>largest and smallest
// #include <stdio.h>
// int gs(int arr[],int a);
// int gs(int arr[],int a){
//     int max,min;
// for (int i = 0; i < a; i++){
//     max = arr[0],min = arr[0];
//     if (max<arr[i])
//        { max = arr[i];}
//     if (min>arr[i])
//        { min = arr[i];}
// } 
//     printf("Max = %d,Min = %d\n",max,min);
// }
// int main(){
//     int a;
// printf("\nEnter number of integers\n");
// scanf("%d",&a);
// int arr[a];
// printf("Enter the integers\n");
// for (int i = 0; i < a; i++)
//     scanf("%d",&arr[i]);
// gs(arr,a);
// return 0;
// }

//4>Binary search
// #include <stdio.h>
// int binary(int arr[],int a,int b){
//     int mid = a/2;
//     if (arr[a/2] < b){
//         for (int i = a/2; i < a; i++){
//             if (arr[i] == b){
//                 printf("%d found at %d position\n",b,i);
//             } } }
//         else if(arr[a/2] > b){
//             for(int i = a/2;i>=0;i--){
//                 if(arr[i] == b){
//                     printf("%d found at %d position",b,i);
//                 } } }
//     else if (arr[a/2] == b){
//         printf("%d found at %d position\n");
//     } }
// int main(){
//     int a,b;
// printf("\nEnter number of elements\n");
// scanf("%d",&a);
// int arr[a];
// printf("Enter elements in ascending order\n");
// for (int i = 0; i < a; i++)
//     scanf("%d",&arr[i]);
//     printf("Enter element to search\n");
//     scanf("%d",&b);
// binary(arr,a,b);
// return 0;
// }

//5>Insertion sort
// #include <stdio.h>
// int ins(int arr[],int i){
//     while (i!=0 && arr[i-1]>arr[i])
//     {
//         int temp = arr[i];
//         arr[i] = arr[i-1];
//         arr[i-1] = temp;
//         i--;
//             }}
//             int sort(int arr[],int n){
//                 for (int i = 0; i < n; i++)
//                     ins(arr,i);}
// int main(){
//     int a,b;
// printf("\nEnter number of elements of array\n");
// scanf("%d",&a);
// int arr[a];
// printf("Enter elements of the array\n");
// for (int i = 0; i < a; i++)
//     scanf("%d",&arr[i]);
// sort(arr,a);
// printf("\nAscending order\n");
// for (int i = 0; i < a; i++)
//     printf("%d ",arr[i]);
//     printf("Descending order\n");
//     for (int i = a-1; i >= 0; i--)
//         printf("%d ",arr[i]);
// return 0;
// }

// 6>Factorial
// #include <stdio.h>
// int fact(int a){
// if (a == 0)
//     return 1;
// return a*fact(a-1);  
// }
// int main()
// {int a;
// printf("\nEnter the number\n"); 
// scanf("%d",&a);
// fact(a);
// printf("Factorial = %d\n",fact(a));
// return 0;
// }

// 7>Decimal to binary
// #include <stdio.h>
// int binary(int a){
//     int arr[a],i;
//     for (i = 0; a>0; i++){
//         arr[i] = a%2;
//         a = a/2;
//     }
//     for (i = i-1; i>=0; i--)
//         printf("%d",arr[i]);
//     }
// int main(){
//     int a;
// printf("\nEnter number in decimal\n");
// scanf("%d",&a);
// binary(a);
// return 0;
// }