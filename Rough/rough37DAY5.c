#include <stdio.h>
int main()
{
// //     1<i>Pascal's triangle using array
//     int a;
// printf("\nEnter number of rows of the Pascal's triangle\n");
// scanf("%d",&a);
// int array[a][a];
// // array[0][0] = 1;
// for (int i = 0; i < a; i++){
//     for (int j = 0; j <= i; j++){
//         if (j == 0||i == j){
//             array[i][j] = 1;
//         }
//         else
//         array[i][j] = array[i-1][j-1] + array[i-1][j];
//     }
// }
// for (int i = 0; i < a; i++){
//     for (int j = 0; j <= i; j++){
//         printf("%d ",array[i][j]);
//     }
//     printf("\n");
// }

// 1<ii>Pascal's traingle without array
// int a,b;
// printf("Enter number of rows of Pascal's triangle\n");
// scanf("%d",&a);
// for (int i = 0; i < a; i++){
//     for (int j = 0; j <= i; j++){
//         if (i == 0|| j == 0){
//             b = 1;
//         }
//         else b = (b*(i-j+1))/j;
//         printf("%d ",b);
//     }
//     printf("\n");
// }

// // 2>Eliminate duplicates from an array
// int a;
// printf("Enter the number of elements of the array\n");
// scanf("%d",&a);
// int array[a];
// printf("Enter the elements of the array\n\n");
// for (int  i = 0; i < a; i++){
//     printf("Enter %d element\n",i);
//     scanf("%d",&array[i]);
// }
// for(int i=0;i<a;i++){
// 	for(int j=i+1;j<a;j++){
// 		if(array[i]==array[j]){
// 			for(int k=j;k<a;k++)
// 				array[k]=array[k+1];
// 				j--;
// 				a--;
// 		}
// 	}
// }
// printf("\nNew array is ");
// for(int i=0;i<a;i++)
// 	printf("%d ",array[i]);

// 3(i)>Pattern
// int i,j,s,n;
// printf("Enter the number show number pattern ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
// 	for(s=1;s<=(n-i);s++)
// 		printf(" ");
// 	for(j=1;j<=(i*2-1);j++)
// 	printf("%d",j);
// 	printf("\n");
// 	}
// for(i=n-1;i>=1;i--){
// 	for(s=1;s<=(n-i);s++)
// 		printf(" ");
// 	for(j=1;j<=(i*2-1);j++)
// 	printf("%d",j);
// 	printf("\n");
// 	}

// //3(ii)>Pattern
// int i,j,s,n;
// printf("Enter any number to show number pattern ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
// 	for(j=1;j<=i;j++)
// 		printf("%d",j);
// 	for(s=1;s<=(n-i);s++)
// 	printf(" ");	
// 	for(s=1;s<=(n-i);s++)
// 	printf(" ");	
// 	for(j=i;j>=1;j--)
// 	printf("%d",j);
// 	printf("\n");
// 	}

return 0;
}
