#include <stdio.h>
#include <stdlib.h>
int main(){

FILE * ptr=NULL;
ptr = fopen("aaaa.txt","r");
char c[10];
fgets(c,3,ptr);
printf("%s\n",c);
fclose(ptr);
return 0;
}