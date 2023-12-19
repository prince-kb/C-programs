#include <stdio.h>
#include <string.h>

int main()
{
char arr[5];
char aalu[8];
printf("First array should be greater than second array \n");
printf("Type 1st array\n");
gets (arr);
puts (arr);
char bluck[8];
printf("Type 2nd array\n");
gets(bluck);
puts(bluck);
printf("%d\n",strlen(arr));
printf("%d\n",strlen(bluck));
printf("%s\n",strrev(strcat(arr,bluck)));
printf("%d\n",strcmp("art","bz"));
// printf("%s\n");
strcpy(aalu,bluck);
puts(aalu);
printf("%s\n",strrev(aalu));
return 0;
}
