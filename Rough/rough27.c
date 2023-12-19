//Armstrong number ---- eg 371 3*3*3  + 7*7*7 + 1*1*1 = 371
#include <stdio.h>
// #include <string.h>
int main()
{
    int a,b,i,c,j,d;
    int array[10];
    printf("\nArmstrong number is a number such that for 371, 3*3*3  + 7*7*7 + 1*1*1 = 371\n");
    printf("To check if a number is Armstrong number or not,\n");
printf("Type the number\n");
scanf("%d",&a);
// PROCESS 1}}
/*
j = a;
array[0] = a%10;
a = a/10;
b++;
if (a!=0)
{
    array[1] = a%10;
    a = a/10;
    b++;
    if (a!=0)
    {
        array[2] = a%10;
        a = a/10;
        b++;
        if (a!=0)
        {
            array[3] = a%10;
            a = a/10;
            b++;
            if (a!=0)
            {
                array[4] = a%10;
                a = a/10;
                b++;
            }
            
        }
        
    }
    
}
// printf("%d\n",b);
// printf("%d\n",array[0]);
// printf("%d\n",array[1]);
// printf("%d\n",array[2]);
// printf("%d\n",array[3]);
// printf("%d\n",array[4]);
// printf("%d\n",array[5]);
for (int i = 0; i < b; i++)
{
   c = array[i] * array[i] * array[i];
   d = d+c;
}
// printf("%d\n",d);
if (d == j)
{
    printf("%d is an Armstrong number\n",j);
}
else printf("%d is not an Armstrong number\n",j);
*/

// PROCESS 2}}
c = a;
while (a!=0)
{
    b = a%10;
    j = j + (b*b*b);
    a = a/10;
}

if (c == j)
{
    printf("%d is an Armstrong number\n",c);
}
else printf("%d is not an Armstrong number\n",c);


return 0;
}