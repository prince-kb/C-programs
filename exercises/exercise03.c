
// To find the Fabonacci series

#include <stdio.h>
int main()
{
    
    int i,k;
    here :
    printf("Type the term of Fabonacci series\n");
    printf("(Upto 48th term only)\n");
    scanf("%d",&i);
    int f[50] = {0,1,1};
   for (int i = 3; i <= 49; i++)
   {
       f[i] = f[i-1] + f[i-2];
   }
   
   printf("%d\n",f[i]);
   
   
   
    return 0;
}

