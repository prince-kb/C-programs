#include <stdio.h>
int main()
{
//1>
    int a;
printf("\nEnter the number\n");
scanf("%d",&a);
for(int i = 1;i<=a;i++){
        for(int j = 1;j<=i;j++){
    printf("%d ",j);
}
printf("\n");
}

//2>
// int a;
// printf("Enter the number\n");
// scanf("%d",&a);
// for(int i = a;i >=1;i--){
//     for (int j = 1; j <= i; j++)
//     {
//     printf("%d ",j);
//     }   
//     printf("\n");
// }

// 3>
// int a,b,c,d;
// printf("Enter the number\n");
// scanf("%d",&a);
// // for (int i = 1;a>=1; i++)
// // {
// //     b = a%10;
// //     c = c+b;
// //     a = a/10;
// //     d = i;
// // }
// while (a>=1)
// {
//      b = a%10;
//     c = c+b;
//     a = a/10;
//     d++;
// }
// printf("Sum = %d\n",c);
// printf("Number of digits = %d\n",d);

// 4>
// int a,b,c,d;
// printf("\n Enter the number \n");
// scanf("%d",&a);
// d = a;
// // for (int i = 0; a != 0; i++)
// // {
// //     b = a%10;
// //     c = c*10 + b;
// //     a /= 10;
// // }
// // printf("%d\n",c+1);
// // printf("%d\n",c);
// while (a>=1)
// {
//     b = a%10;
//     c = c*10 + b;
//     a /= 10;
// }
// if (d == c)
// {
//     printf("Palindrome number\n");
// }
// else printf("Not a palindrome number\n");

// 5>
// int a,b=2,c = 0;
// printf("Enter the number\n");
// scanf("%d",&a);
// while(b<a){
//     for (int i = 2; i < b; i++)
//     {
//         c = 0;
//         if (b%i == 0)
//         {
//            c = 1;
//            break;
//         }
//         else c = 0;
//     }
//     if (c == 0)
//     {
//         printf("%d ",b);
//     }
//     b++;
// }

// 6> Print Angstrom number between 1 & n
// int b,c,d=0,e;
// printf("Type the number\n");
// scanf("%d",&c);
// for (int i = 2; i < c; i++)
// { e = i;
//     while (e!=0)
// {
//     b = e%10;
//     e = e/10;
// d = d + b*b*b;
// }
// if(d == i){
//     printf("%d ",d);
// }
// d = 0;
// }

// 7>Krishnamurthy/Strong number
// int a,b,c = 1,d,e;
// printf("Enter the number\n");
// scanf("%d",&a);
// e = a;
// while(a!=0){
//     b = a%10;
// for (int i = 1; i <= b; i++)
// {
//     c = c*i;
//     // printf("%d ",c);
// }
// d = d+c;
// c = 1;
// a = a/10;
// // printf("%d ",d);
// }
// if (d == e)
// {
//     printf("Krishnamurthy/Strong number\n");
// }
// else 
//     printf("Krishnamurthy/Strong number\n");

// 8>
// int a,b,c;
// printf("Type the number\n");
// scanf("%d",&a);
// c = a;
// for (int i = 1; i <= a/2; i++)
// {
//     if (a%i == 0)
//     {
//         // printf("%d ",i);
//         b = b + i;
//     }
// }
// // printf("%d \n",c);
// if (b == c)
// {
//     printf("Perfect number\n");
// }
// else printf("Not perfect number\n");

// 9>
// int a,b,c;
// printf("Type two numbers\n");
// scanf("%d %d",&a,&b);
// for (int i = 1; i <= a && i <= b; i++)
// {
//     if(a%i == 0 && b%i == 0){
//         c = i;
//     }
// }
// printf("%d is the HCF\n",c);

// 10>
// int a,b,c;
// printf("Enter the two numbers\n");
// scanf("%d %d",&a,&b);
// for (int i = a*b; i >= a; i--)
// {
//     if (i%a == 0 && i%b == 0)
//     {
//         c = i;
//     }
// }
//         printf("LCM = %d\n",c);

return 0;
}