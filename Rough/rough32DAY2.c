//Programming questions DAY 2
#include <stdio.h>
int main()
{
//     1>
//     int a,b;
// printf("\nEnter the number\n");
// scanf("%d",&a);
// b = a;
// for(int i = a;i>=1;i--){
//     a = a*i;
// }
// printf("Factorial of %d is %d\n",a,a/b);

// 2>
// int a,b,i=1;
// printf("Enter the number upto which you want multiplication table of\n");
// scanf("%d",&a);
// while(i <= 10){
//     printf("%dx%d=%d\n",a,i,a*i);
// i++;
// }

// 3>
// int a,b,c;
// printf("Enter the number\n");
// scanf("%d",&a);
// printf("Even numbers: ");
// for (int i = 1; i < a; i++)
// {
//     switch (i%2)
//     {
//     case 0:
//         printf("%d ",i);
//         b = b+i;
//         break;
    
//     default:
//         break;
//     }
// }
// printf("\nOdd numbers: ");
// for (int i = 0; i < a; i++)
// {
//     switch (i%2)
//     {
//     case 0:
//         break;
    
//     default:
//     printf("%d ",i);
//     c = c+i;
//         break;
//     }   
// }

// printf("\nThe sum of even numbers is %d\n",b);
// printf("The sum of odd numbers is %d\n",c);

// 4>
// int a,b;
// printf("Enter the number\n");
// scanf("%d",&a);
// printf("The factors are\n");
// for (int i = 2; i < a; i++)
// {
//     switch(a%i){
//         case 0:printf("%d ",i);
//     }
// }

// 5>
// int a,b;
// printf("Enter the number\n");    
// scanf("%d",&a);
// for (int i = 2; i < a; i++)
// {
//     switch(a%i){
//         case 0: printf("%d is not a prime number\n",a);
//         goto firse;
//         default:
//         break;
//     }
// }
// printf("%d is a prime number\n",a);
// firse:

// 6>
// int a,b;
// printf("Enter the number\n");
// scanf("%d",&a);
// for (int i = 0; i <= a; i++)
// {
//     b = b+i;
// }
// printf("The sum is %d\n",b);

// 7>
// int a,i=1,b;
// printf("Enter the number\n");
// scanf("%d",&a);
// while (i<a)
// {
//     b = b+i;
//     i= i+2;
// }
// printf("The sum is %d\n",b);

// 8>
// int a,b;
// printf("Enter the number\n");
// scanf("%d",&a);
// for (int i = 1; i+2<=a; i++)
// {
//     b = b + i* (i+1) * (i+2);
// }
// printf("The sum is %d\n",b);

// 9>
// int a,b;
// printf("Enter the number\n");
// scanf("%d",&a);
// for (int i = 1; i <= a; i++)
// {for(int j = 1;j<=i;j++){
//     b = b+i ;
// }}
// printf("The sum is %d\n",b);

// 10>

int a,b;
printf("\nType the number\n");
scanf("%d",&a);
for (int i = 1; i <= (a-2); i= i+2)
{
     b = b+(i*(i+2));
}
     printf("The sum is %d\n",b);

return 0;
}