//Use of pointers
#include <stdio.h>
int main()
{
    int a;
    int *ptr = NULL;
printf("\nType the value of a\n");
scanf("%d",&a);
// ptr = &a;
printf("%d\n",*ptr);
return 0;
}

#include <stdio.h>
int glt = 67;
int main(){
int glt(int a){
   static int b = 5;
    printf("%d\n",b*2);
 b++;
}
glt(3);
glt(3);
glt(3);
return 0;
}
