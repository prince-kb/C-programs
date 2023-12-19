/* Using static function which will always show changed value */
#include <stdio.h>
int val(int b){
static int a;
a++;
return b + a; 
}
int main()
{
    int b;
   printf("Type the number\n");
scanf("%d",&b);

printf("%d\n",val(b));      
printf("%d\n",val(b));      
printf("%d\n",val(b));      
printf("%d\n",val(b));      
printf("%d\n",val(b));      
printf("%d\n",val(b));      
printf("%d\n",val(b));
printf("%d\n",val(b));      
printf("%d\n",val(b));      
printf("%d\n",val(b));      
}

