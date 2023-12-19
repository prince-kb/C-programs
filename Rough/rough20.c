// To count words
#include <string.h>
#include <stdio.h>
int main()
{
    int a,z;
   char worda[10000];
        printf("\nType/copy the word");
        printf("\nHint-Don't use paragraph spaces\n");
    gets(worda);
    // printf("%d\n",strlen(worda));
    a = strlen(worda);
for (int i = 0; i <  a; i++)
{
    if (worda[i] == ' ')
    {z=z+1;}

}printf("%d\n",z);
return 0;
}