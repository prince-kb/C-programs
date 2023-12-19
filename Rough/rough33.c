// To check a perfect number
#include <stdio.h>
int main()
{
    int a,b;
printf("\nType the number\n");
scanf("%d",&a);
printf("Factors of %d are: ",a);
for (int i = 1; i < a; i++)
{
    if(a%i == 0){
    printf("%d ",i);
    b = b+i;
}
}
if( b == a){
    printf("\nPerfect number");   
}
else printf("\nNot a perfect number");
return 0;
}