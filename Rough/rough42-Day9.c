// 1>Add two floating point numbers using pointers
// #include<stdio.h>
// int main(){
// 	float a,b,sum=0;
// 	float *p,*q;
// 	printf("\n Enter 1st and 2nd number: ");
// 	scanf("%f %f",&a,&b);
// 	p=&a,q=&b;
// 	sum=*p+*q;
// 	printf("Sum= %0.2f",sum);
// 	return 0;
// 	}

// 2>Sum and average of numbers from m to n
// #include<stdio.h>
// int main(){
// 	int a,b,sum=0;
// 	int *p,*q;
// 	float avg;
// 	printf("\n Enter values of m and n\n");
// 	scanf("%d %d",&a,&b);
// 	p=&a,q=&b;
// 	for(int i=*p;i<=*q;i++)
// 		sum=sum+i;
// 	avg= (float)sum/(*q-*p+1);
// 	printf("Sum= %d\n",sum);
// 	printf("Mean= %0.2f\n",avg);
// 	return 0;
// 	}

//3>to Add two integers using function passing pointers as arguments.
// #include<stdio.h>
// int add(int*,int *);
// int add(int*a,int *b){
// 		int sum=*a+*b;
// 		return sum;
// 	}
// int main(){
// 	int a,b,sum=0;
// 	printf("\n Enter 1st and 2nd number:");
// 	scanf("%d %d",&a,&b);
// 	sum=add(&a,&b);
// 	printf("Sum= %d",sum);
// 	return 0;
// 	}

// 4>Read array and print the sum
// #include<stdio.h>
// float mean(int *a,int n){
// 		float sum=0,avg;
// 		for(int i=0;i<n;i++)
// 		sum=sum+(float)a[i];
// 		avg=sum/n;
// 		return avg;
// 	}
// void display(int *a,int n){
// 		for(int i=0;i<n;i++)
// 		printf("%d\t",a[i]);
// 	}
// int main(){
// 	int n;
// 	float avg;
// 	printf("\n Enter the size of the array ");
// 	scanf("%d",&n);
// 	int a[n];
//     printf("Enter the elements\n");
// 	for(int i=0;i<n;i++)
// 	scanf("%d",&a[i]);
// 	display(a,n);
// 	avg= mean(a,n);
// 	printf("\n Mean=%0.2f  ",avg);
// 	return 0;
// 	}

// 5>Smallest of the array using pointers
// #include<stdio.h>
// int smallest(int*a,int n){
// 	int small=a[0];
// 		for(int i=0;i<n;i++){
// 			if(small>a[i])
// 			small=a[i];
// 		} return small;
// 	}
// int main(){
// 	int n;
// 	printf("Enter the size of the array: \n");
// 	scanf("%d",&n);
// 	int a[n];
// 	int *ptr=a;
// 	printf("Enter the elements of the array\n");
// 	for(int i=0;i<n;i++)
// 	scanf("%d",&ptr[i]);
// 	printf("Smallest = %d",smallest(ptr,n));
// 	return 0;
// 	}

// 6>Show a matrix using pointers
// #include<stdio.h>
// int main(){
// 	int i,j,m,n;
// 	printf("Enter the number of rows and columns\n");
// 	scanf("%d %d",&m,&n);
// 	int a[m][n];
//     printf("Enter the elements of matrix");
// 	for(i=0;i<m;i++){
// 		printf("\n");
// 		for(j=0;j<n;j++)
// 		scanf("%d",&*(*(a+i)+j));
// 	}
//     printf("Matrix is :\n");
// 	for(i=0;i<m;i++){
// 		printf("\n");
// 		for(j=0;j<n;j++)
// 		printf("%d ",*(*(a+i)+j));
// 	}
// 	return 0;
// }

// 7>Array using Dynamic Memory Allocation
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int n;
// int *ptr;
// printf("Enter the size of the array : ");
// scanf("%d", &n);
// ptr =  (int*)malloc(n*(sizeof(int)));
// for (int i = 0; i < n; i++)
// scanf("%d", &ptr[i]);
// printf("Entered numbers are : ");
// for (int i = 0; i < n; i++)
//     printf("%d ", ptr[i]);
// return 0;
// }

// 8>Matrix using Dynamic Memory Allocation
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//    int m,n;
//    printf("Enter values of m and n\n");
//    scanf("%d %d",&m,&n);
//    int *a = (int *)malloc(m * n * sizeof(int));
//    int i, j;
//    printf("Enter the elements of matrix\n");
//    for (i = 0; i < m; i++)
//       for (j = 0; j < n; j++)
//          scanf("%d", &*(a + i*n + j));    
//    printf("The array elements are:\n");
//    for (i = 0; i < m; i++) {
//       for (j = 0; j < n; j++)
//          printf("%d ", *(a + i*n + j));
//       printf("\n");
//    }
//    free(a);
//    return 0;
// }