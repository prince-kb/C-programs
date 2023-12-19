// Printing letters and symbols
#include <stdio.h>
int main()
{
   int z,y;
firse:
printf("\nFor capital case letters forward type 1");
printf("\nFor capital case letters backwards type 2");
printf("\nFor small case letters forward type 3");
printf("\nFor small case letters backwards type 4");
printf("\nFor symbols and numbers type 5\n");

scanf("%d",&z);
switch(z){
   case 1:
   {
      for(int i=65;i<=90;i++){
         printf("%c ",i);
      }
      break;
   }
   case 2:
   {
      for(int i=90;i>=65;i--){
         printf("%c ",i);
      }
   }break;
   case 3:
   {
      for(int i=97;i<=122;i++)
      {
         printf("%c ",i);
      }
      break;
   }
   case 4:
   {
      for (int i = 122; i >= 97; i--)
{
   printf("%c ",i);
}break;
   }
   case 5:
   {
      for (int i = 7; i <=64; i++)
      {
         printf("%c ",i);
      }
      for(int i=122;i<=175;i++){
         printf("%c ",i);
      }break;
      
   }
   default:{
   printf("Wrong Input\n");
   break;
}
}
printf("\nTo try again press 0\n");
printf("To quit press 1\n");
scanf("%d",&y);
switch(y){
   case 0:{
      goto firse;
      break;
   }
   case 1:{
      printf("Exitting the program...\n");
      goto end;
      break;
   }
   default :
      {
      printf("You gave wrong input\n");
      printf("Exitting the program...\n");
      break;
}
}

end:
return 0;
}