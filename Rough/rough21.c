//To print prime numbers
#include <stdio.h>
#include <string.h>
int main()
{
    int b=1,a;
printf("\nType the number\n");
scanf("%d",&a);
printf("%d is divisible by :",a);
for(int i = 2;i< a;i++){
    switch(a%i){
        case 0:
         printf(" %d",i);
         b = 0;
         continue;
        case !0:
       
        break;
    }
    

}
// printf("%d\n\n",b);
printf("\n");
if (b == 0){
    printf("%d is not a prime number\n",a);
}
else printf("%d is a prime number\n",a);

return 0;
}