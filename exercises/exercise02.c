// to convert the units
#include <stdio.h>


int main()
{
    
    int a,z;
    float b,c;
   label:
   
   printf("To convert inches to foot press 1\n");
   printf("To convert foot to inches press 2\n");
   printf("To convert kilograms to pound press 3\n");
   printf("To convert pound to kilogram press 4\n");
   printf("To convert inches to centimetres press 5\n");
   printf("To convert centimetres to inches press 6\n");
   printf("To convert kilometres to miles press 7\n");
   printf("To convert miles to kilometres press 8\n");
   scanf("%d",&a);
   if (a == 1 || a == 2|| a == 3 || a == 4 || a == 5 || a == 6 || a == 7 || a == 8)
   {
        printf("Type the measurement\n");
   scanf("%f",&b);
   if (a == 1)
   {
       printf("%f inches = %f foot\n",b, (float)b/12 );
   }
   else if (a == 2)
   {
       printf("%f foot = %f inches\n",b, (float)b*12 );
   }
   else if (a == 3)
   {
       printf("%f kilogram = %f pounds\n",b, (float)b*2.204623 );
   }
   else if (a == 4)
   {
   printf("%f pounds = %f kilograms\n",b, (float)b/2.204623);
   }
    else if (a == 5)
   {
   printf("%f inches = %f centimetres\n",b, (float)b*2.54);
   }
   else if (a == 6)
   {
       printf("%f centimetres = %f inches\n",b,(float)b/2.54);
   }
   else if (a == 7)
   {
       printf("%f kilometres = %f miles\n",b, (float)b/1.6);
   }
   else if (a == 8)
   {
       printf("%f miles = %f kilometeres\n",b,(float)b*1.6);
   }
   }
   
   else
   printf("You gave wrong input\n");
   printf("To retry press 9\n");
   printf("To quit press 0\n");
   scanf("%d",&z);
   if (z == 9)
   {
       goto label;
   }
   else if (z == 0)
   {
       goto end;
   }
   end:
   
    return 0;
}