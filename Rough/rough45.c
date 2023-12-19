#include <stdio.h>
int main(){
printf("\nffE\n");
    FILE *aalu = NULL;
    char string[40]="bbbbbblllll";
    aalu = fopen("aaaa.txt","a");
    fprintf(aalu,"%s",string);
    // printf("++%s++\n",string);
return 0;
}
