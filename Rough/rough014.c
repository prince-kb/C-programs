//Summation of Fibonacci Series.
#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    int fib[45];
    fib[0]=0;
    fib[1]=1;
    tu:
printf("Type the term upto which you want the addition of Fibonacci series\n");
scanf("%d",&n);
if (n<=45)
{
    printf("The Fibonacci series is: ");
for(i=0;i<n;i++){
fib[i+2]=fib[i]+fib[i+1];
printf("%d, ",fib[i]);
}

    int fadd,gad=0;
    for(i=0;i<n;i++){
        fadd=gad+fib[i];
        gad=fadd;
}
printf("The summation of n fibonacci numbers is %d\n",fadd);

}
else {printf("Fibonacci series upto 45 terms can only be possible here\n");
goto tu;
}

return 0;
}