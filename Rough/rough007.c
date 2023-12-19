#include <stdio.h>
#include <string.h>
int main()
{
    // char cll[] = "true";
    // printf("%s\n",cll);
    // gets(cll);
    // puts(cll);
    char f1 [10];
    printf("Type name of friend 1\n");
    gets(f1);
    char f2 [10];
    printf("Type name of friend 2\n");
    gets(f2);
    printf("The name of friend is %s\n",strcat(f1, f2));
    
    printf("%s\n",strrev(strcat(f2,f1)));
    printf("%d\n",strlen(f2));
    printf("%d\n",strcmp(f1,f2));
    puts(strrev(f2));
   
return 0;
}