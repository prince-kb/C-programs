// To print prime numbers before a number
#include <stdio.h>
int main()
{
    int a,b=2,c,d,z = 0;
printf("\nType the numbers\n");
scanf("%d",&a);
for (int i = 2; i <= a/2; i++)
{ switch(a%i){
        case 0: c = 1;
        // printf("%d ",i);
        break;
} }
// printf("%d\n",c);
if (c == 1)
{
    printf("%d is not a prime number\n",a);
}
else     printf("%d is a prime number\n",a);
printf("Prime numbers before %d are : ",a);
    while(b < a){
        d = 0;
    if(a<=1){
        a++;
    }
    for (int i = 2; i < b; i++)
    {
        switch(b%i){
            case 0: d = 1;
            break;
        }
    }
    switch(d){
        case 0:
        printf("%d ",b);
        z++;
    }
    b=b+1;
    }
    printf("\nThere are total %d prime numbers before %d\n",z,a);
return 0;
}