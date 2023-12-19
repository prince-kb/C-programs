//Factorial using recursion
/*
#include <stdio.h>
int fact(int a){
    if(a==1)
    return 1;
    else {return (a*fact(a-1));}
}
int main(){
    int i,a;
printf("\nEnter the number: ");
scanf("%d",&a);
fact(a);
printf("%d\n",fact(a));
return 0;
}
*/
//Uses less time
/*
#include <stdio.h>
int fact(int a,int r){
if (a==1)
    return r;
else  r= r*a;
return(fact(a-1,r));
}
int main(){
    int a,r=1;
printf("\nEnter the number: ");
scanf("%d",&a);
fact(a,r);
printf("Factorial = %d",fact(a,r));
return 0;
}
*/