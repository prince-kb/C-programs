// To find the greatest number among three
#include <stdio.h>
#include <stdio.h>
int main()
{
    int a,b,c;
printf("Type first number\n");
scanf("%d",&a);
printf("Type second number\n");
scanf("%d",&b);
printf("Type third number\n");
scanf("%d",&c);
if(a>=c){
    if(a>=b){
            printf("The largest number is %d",a);
    }
    else printf("The largest number is %d",b);
}
else printf("The largest number is %d",c);
return 0;
}