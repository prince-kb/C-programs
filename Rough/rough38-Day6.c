//1>Smallest and largest function using function 
// #include <stdio.h>
// int small(int,int,int);
// int main(){
// int a,b,c;
// printf("\nEnter three numbers\n");
// scanf("%d %d %d",&a,&b,&c);
// small(a,b,c);
// return 0;
// }
// int small(int i,int j,int k){
//     int smallest;
//     if (i<j){
//         if (i<k){
//             printf("Smallest = %d\n",i);
//         }
//         else printf("Smallest = %d\n",k);
//     }
//     else if(j<=i){
//         if (j<=k){
//             printf("Smallest = %d\n",j);
//         }
//         else printf("Smallest = %d\n",k);
//     }
// }

// 2>Area of Triangle
// #include <stdio.h>
// int area(int,int);
// int main()
// {int b,h;
// printf("\nEnter the base and height of triangle\n");
// scanf("%d %d",&b,&h);
// area(b,h);
// return 0;
// }
// int area(int i,int j){
//     printf("Area of Triangle = %0.2f \n",i*j*0.5);
// }

// 3>Permutation
// #include <stdio.h>
// int perm(int);
// int perm(int a){
//     int c=1;
//     for (int i = 1; i <= a; i++){
//         c = c*i;
//     }
//     return c;
// }
// int main()
// {
//     int n,r;
// printf("\nEnter n and r value\n");
// scanf("%d %d",&n,&r);
// printf("The permutation value is %d\n",perm(n)/perm(n-r));
// return 0;
// }

// 4>Combination
// #include <stdio.h>
// int comb(int,int);
// int comb(int a,int b){
//     int c=1,d=1,e=1;
//     for (int i = 1; i <= a; i++){
//         c = c*i;
//     }
//     for (int j = 1; j <= b; j++){
//         d = d*j;
//     }
//     for (int k = 1; k <= a-b; k++){
//         e = e*k;
//     }
//     printf("The combination value is %d\n",c/(d*e));
// }
// int main()
// {
//     int n,r;
// printf("\nEnter n and r value\n");
// scanf("%d %d",&n,&r);
// comb(n,r);
// return 0;
// }

// 5> 1/1! + 4/2! + 27/3! + ......
// #include <stdio.h>
// int ans(int);
// int ans(int b){
//     int m = 1,o;
//     float p=0;
//     o = b;
//     for (int i = 1; i <= b; i++){
//         m = 1,o = i;
//         for (int j = 1; j <= i; j++){
//             m = m*j;}
//         for (int k = 1; k < i; k++){
//             o = o * i;}
//     p = p + (float)o/m; }
//     printf("%0.2f\n",p);}
// int main(){
//     int n;
// printf("\nEnter the number\n");
// scanf("%d",&n);
// ans(n);
// return 0;
// }

// 6>Sum of two prime numbers
// #include <stdio.h>
// int isprime(int a){
//     int fact=0;
//     for (int i=1;i<=a;i++){
//         if (a%i==0){
//             fact++;
//         }
//     }
//     if (fact>2){
//         return 0;
//     }
//     return 1;
// }
// int main() {
//     int n;
//     printf("Enter a number:  ");
//     scanf("%d",&n);
//     int count=0;
//     for (int i=1;i<=n/2;i++){
//         if ( isprime(i)==1 && isprime(n-i)==1){
//             printf("\n%d = %d + %d",n,i,n-i);
//             count++;
//         }
//     }
//     if (count>0){
//         printf("\nYes %d can be expressed as sum of two prime numbers.",n);
//     }
//     else{
//         printf("\nNo %d cannot be expressed as sum of two prime numbers.",n);
//     }
//     return 0;
// }

//7i> Swap two numbers using call by value
// #include <stdio.h>
// int swap(int,int);
// int swap(int i,int j){
//     printf("Before-%d %d\n",i,j);
// i = i+j;
// j = i-j;
// i = i-j;
// printf("After-%d %d\n",i,j);
// }
// int main()
// {
//     int a,b;
// printf("\nEnter two numbers\n");
// scanf("%d %d",&a,&b);
// swap(a,b);
// return 0;
// }

// 7ii>Swap two numbers using call by reference
// #include <stdio.h>
// int swap(int,int);
// int swap(int i,int j){
//     printf("Before-%d %d\n",i,j);
//     int *p,*q,*temp;
//     p = &i,q = &j;
// temp = p;
// p = q;
// q = temp;
// printf("After -%d %d\n",*p,*q);
// }
// int main()
// {
//     int a,b;
// printf("\nEnter two numbers\n");    
// scanf("%d %d",&a,&b);
// swap(a,b);
// return 0;
// }

// 8>Binomial coefficient table
// #include <stdio.h>
// int fact(int);
// int fact(int a)
// {
//     int f=1;
//     for (int i=1;i<=a;i++)
//     {
//         f*=i;
//     }
//     return f;
// }
// int main() {
//     int max;
//     printf("Enter max value : ");
//     scanf("%d",&max);
//     for (int i=0;i<=max;i++)
//     {
//         for (int j=0;j<=i;j++)
//         {
//             printf("%d ",fact(i)/(fact(j)*fact(i-j)));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 9>factorial using recursion
// #include <stdio.h>
// int fact(int);
// int fact(int a)
// {
//  if(a==1)
//  return 1;
//     else
//     {
//  return a*(fact(a-1));
//     }
// }
// int main() {
//     int n;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     printf("\nfactorial of %d = %d",n,fact(n));
//     return 0;
// }

// 10>GCD/HCF of two numbers
// #include<stdio.h> 
// int gcd(int,int);
// int gcd(int a, int b)
// {
//     if(b==0)
//         return a;
//     return gcd(b,a%b);
// }
// int main()
// {
//     int a, b;
//     printf("Enter two number: ");
//     scanf("%d %d", &a, &b);
//     printf("GCD: %d", gcd(a,b));
// return 0;
// }

// 11>Binomial coefficient table using recursion
// #include <stdio.h>
// int fact(int);
// int fact(int a)
// {
//     if(a == 0) 
//     return 1;
//     else
//     return (a*fact(a-1));
// }
// int main() {
//     int max;
//     printf("Enter max : ");
//     scanf("%d",&max);
//     for (int i=0;i<=max;i++)
//     {
//         for (int j=0;j<=i;j++)
//         {
//             printf("%d ",fact(i)/(fact(j)*fact(i-j)));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 12>Ackermann Function
#include<stdio.h>
int ack(int m,int n){
	if(m==0){
		return n+1;
	}
     else{
	 if(n==0)
		return ack(m-1,1);
    else
	return (ack(m-1,ack(m,n-1)));	
	}}
int main(){
	int m,n,ans;
	printf("\n Enter the two values :");
	scanf("%d %d",&m,&n);
	ans=ack(m,n);
	printf("\n Result= %d",ans);
	return 0;
}

