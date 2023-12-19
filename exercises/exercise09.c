#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c,d,e;
    char computer[10],you;
    system("cls");
printf("\nWe are playing ROCK,PAPER,SCISSOR\n");
// printf("%d\n",b);
    printf("Type the number of rounds you want to play with COMPUTER\n");
    scanf("%d",&e);
for (int i = 0; i < e; i++)
{
    fir:
    printf("Chance %d :",i+1);
    printf("\nType 1 for ROCK , 2 for PAPER , 3 for SCISSOR: ");
scanf("%d",&a);
srand(time(NULL));
b = rand()%3;
    switch(a){
   case 1:
    if (b == 0)
    {
printf("\nyou => ROCK computer => ROCK\n");
    printf("YOU - %d COMPUTER - %d\n",c,d);
break;
}
else if (b == 1)
{
    printf("\nyou => ROCK computer => PAPER\n");
    c++;
    printf("YOU - %d COMPUTER - %d\n",d,c);
break;
}
else if(b == 2){
    printf("\nyou => ROCK computer => SCISSOR\n");
    d++;
    printf("YOU - %d COMPUTER - %d\n",d,c);
break;
}
else {
    printf("Wrong value\n");
    i--;}
break;
case 2:
if (b == 0)
{
    printf("\nyou => PAPER computer => ROCK\n");
    d++;
     printf("\nYOU - %d COMPUTER - %d\n",d,c);
break;
}
else if(b == 1){
    printf("\nyou => PAPER computer => SCISSOR\n");
    c++;
     printf("\nYOU - %d COMPUTER - %d\n",d,c);
break;
}
else if(b == 2){
    printf("\nyou => PAPER computer => PAPER\n");
     printf("\nYOU - %d COMPUTER - %d\n",d,c);
break;
}
else {
    printf("Wrong value\n");
    i--;
}break;
case 3:
if(b == 0){
    printf("\nyou => SCISSOR computer => ROCK\n");
    c++;
    printf("\nYOU - %d COMPUTER - %d\n",d,c);
break;
}
else if(b == 1){
    printf("\nyou => SCISSOR computer => SCISSOR\n");
    printf("\nYOU - %d COMPUTER - %d\n",d,c);
break;
}
else if (b == 2)
{
    printf("\nyou => SCISSOR computer => PAPER\n");
    d++;
    printf("\nYOU - %d COMPUTER - %d\n",d,c);
break;
}
else{
printf("Wrong value\n");
goto fir;
}
break;
}
}

if (c>d)
{
    printf("COMPUTER won\n");
}
else if (d<c)
{
    printf("YOU won\n");
}
else if( c == d){
    printf("TIE\n");
}

return 0;
}