// To find whether a year is leap or not
/*
#include <stdio.h>
#include <string.h>

int main()
{int year,g,h,i=0;
int b[10];
// year=(int*)malloc(1*sizeof(int));
printf("Type the year\n");
scanf("%d",&year);
b[0]=year%10;
g=year/10;
b[1]=g%10;
// printf("%d\n",b[0]);
// printf("%d\n",b[1]);
if(year/400 == 1){
    printf("%d is a leap year\n",year);
}
else if (b[0]==0)
{
    switch(b[1]){
        case 4:
        printf("%d is a leap year\n",year);
        break;
        case 8:
        printf("%d is a leap year\n",year);
        break;
        default:
        printf("%d is not a leap year\n",year);
        break;
    }
}

else if (b[0]==2)
{
    switch (b[1])
    {
        case 1:
        printf("%d is a leap year\n",year);
        break;
        case 3:
        printf("%d is a leap year\n",year);
        break;
        case 5:
        printf("%d is a leap year\n",year);
        break;
        case 7:
        printf("%d is a leap year\n",year);
        break;
        case 9:
        printf("%d is a leap year\n",year);
        break;
        default:
        printf("%d is not a leap year\n",year);
        break;
    }
}
else if (b[0]==4)
{
    switch(b[1]){
        case 2 :
        printf("%d is a leap year\n",year);
        break;
        case 4 :
        printf("%d is a leap year\n",year);
        break;
        case 6 :
        printf("%d is a leap year\n",year);
        break;
        case 8 :
        printf("%d is a leap year\n",year);
        break;
        default:
        printf("%d is not a leap year\n",year);
        break;
    }
}
else if (b[0]==6)
{
    switch(b[1]){
        case 1:
        printf("%d is a leap year\n",year);
        break;
        case 3:
        printf("%d is a leap year\n",year);
        break;
        case 5:
        printf("%d is a leap year\n",year);
        break;
        case 7:
        printf("%d is a leap year\n",year);
        break;
        case 9:
        printf("%d is a leap year\n",year);
        break;
        default:
        printf("%d is not a leap year\n",year);
        break;
    }
}

else if(b[0]==8){
    switch(b[1]){
        case 8:
        printf("%d is a leap year\n",year);
        break;
        case 0:
        printf("%d is a leap year\n",year);
        break;
        case 4:
        printf("%d is a leap year\n",year);
        break;
        case 6:
        printf("%d is a leap year\n",year);
        break;
        case 2:
        printf("%d is a leap year\n",year);
        break;
        default: 
        printf("%d is not a leap year\n",year);
        break;
    }

}
else printf("%d is not a leap year\n",year);



// if ()
// {
//     printf("%d is a leap year\n",year);
// }
// else printf("%d is not a leap year\n",year);

return 0;
//*/
// OOOOOORRRRR
#include <stdio.h>
#include <string.h>
int main()
{
    int year,a;
printf("Type the year\n");
scanf("%d",&year);
if(year%400 == 0){
    printf("%d is not a leap year\n",year);
    }

else if(year%4==0){
    printf("%d is a leap year\n",year);
    
}
else printf("%d is not a leap year\n",year);

return 0;
}