//CAPITAL CASE/small case letters to small case letters
#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
int main()
{
    int a,p;
char str[2000];
printf("Type the sentence\n");
gets(str);
// puts(str);
p = strlen(str);
for (int i = 0; i < p; i++)
{
a = str[i];
if(a>90){
    printf("%c",a);
}
else if(a<65){
    printf("%c",a);
}
else
{
    printf("%c",a+32);
}
}
return 0;
}