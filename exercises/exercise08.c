//To print employee id and not consuming extra memory.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 int id(int n){
   int b,p;
   char *ptr;
      printf("Type the number of characters in your employee id\n");
    scanf("%d",&b);
    ptr = (char*)malloc(b*sizeof(char));
    printf("Type your %dth employee id\n",p+1);
    scanf("%s",ptr);
    printf("Your employee id is %s\n",ptr);
    p++;
free(ptr);
}
int main()
{
  for (int i = 0; i < 3; i++)
  {
    id(3);
  }
  

return 0;
}
