// GP series
// For full GP and AP series move to rough1.c
#include <stdio.h>
#include <string.h>
int main()
{
    int ser[30];
    int a,b,c,e,l,z;
printf("\nType the first term\n");
scanf("%d",&a);
printf("Type the common ratio\n");
scanf("%d",&b);
printf("Type the term you want\n");
scanf("%d",&c);
    e == a;
// printf("The GP series is \n");
for (int i = 0; i < c; i++)
{
    ser[i] = a;
    a=b*a;
}
firse:
printf("For GP series type 2\n");
printf("For a GP term type 1\n");
scanf("%d",&l);
switch (l)
{
case 1:
    printf("Type the term you want\n");
scanf("%d",&z);
printf("The a%d term is %d\n",z,ser[z]);
    break;
case 2:
for(int i;i<c;i++){
    printf("%d ",ser[i]);
}
break;
default:
printf("Wrong input\n");
goto firse;
    break;
}
return 0;
}