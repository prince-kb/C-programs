/*
// 1>Sum of odd numbers
#include <stdio.h>
int main(){
    int a,b;
printf("\nEnter the number of terms\n");
scanf("%d",&a);
for (int i = 1; i < 2*a; i=i+2){
    printf("%d ",i);
    b = b +i;
}
printf("\nSum = %d\n",b);
return 0;
}
*/
/*
//Angstrom
#include <stdio.h>
void cang(int a){
    int b,c=0,d=0;
    b = a;
while (b!=0){
  c = b%10;
  d = d + c*c*c;
  b = b/10;     
}
if (a==d)
    printf("%d ",a);
}
int main(){
    int a;
printf("\nEnter the number to check Angstrom numbers before it\n");
scanf("%d",&a);

for (int i = 1; i < a; i++)
    cang(i);

return 0;
}
*/

//Check Palindrome
#include <stdio.h>
int main(){
    int a,b,c,d=0,e=0;
printf("\nEnter the number to check palindrome: ");
scanf("%d",&a);
b=a;
while (b!=0){
    d++;
    b=b/10;}
    b=a;
    while(b!=0){
        c=b%10;
        for (int i = d; i >1; i--)
        c=c*10;
    b=b/10;
    e=e+c;
    d--;
    }       

if (e==a)
    printf("%d is palindrome\n",a);
else
    printf("%d is not palindrome\n",a);
return 0;
}

/*
#include <stdio.h>
int b=0;
int fib(int a){
    if (b>=a)
        return 0;
    else {
        b++;
        printf("%d ",b);
    }
    }
int main(){
    int a;
printf("\nEnter number of terms of Fibonacci series\n");
scanf("%d",&a);
fib(a);
return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a;
printf("\nEnter the number: ");
scanf("%d",&a);
for (int i = 1; i <= a; i++){
    for (int j = 1; j <= i; j++)
        printf("%d ",i);
        printf("\n");
}

return 0;
}*/
/*
#include <stdio.h>
int main(){
    int a,i,b=1;
printf("\nEnter the number of rows: ");
scanf("%d",&a);
for (i = 1; i <= a; i++){
    for (int j = 1; j <= i; j++){
        printf("%d ",b);
        b++;
}
printf("\n");}
return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a,es=0,os=0,j=0;
printf("\nEnter number of elements\n");
scanf("%d",&a);
int arr[a];
printf("Enter elements of array\n");
for (int i = 0; i < a; i++)
    scanf("%d",&arr[i]);
printf("Before a negative number:\n");
for (int i = 0; i < a; i++){
    if (arr[i]>=0){
        printf("%d ",arr[i]);
        j++;}
    else break;
}

for (int i = 0; i < j; i++){
    if (arr[i]%2==0)
        es=es+arr[i];
else os = os+arr[i];  
}
printf("\nEven sum = %d\nOdd sum = %d",es,os);
return 0;
}
*/  /*
#include <stdio.h>
int main(){
    int a,X,Y,Z;
printf("\nEnter number of tests\n");
scanf("%d",&a);
for (int i = 0; i < a; i++)
{
printf("Enter values of X,Y and Z\n");
scanf("%d %d %d",&X,&Y,&Z);
if (Z>=(X+Y)){
    printf("2\n");
}
else if (Z>=X){
    printf("1\n");}
else printf("0");
}


return 0;
}*/