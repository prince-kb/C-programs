// Identifying odd and even number
#include <stdio.h>
#include <string.h>
int main(){
    int a;
    printf("\nType the number\n");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("%d is an even number\n",a);
    }
 else
 printf("%d is an odd number\n",a);   
}