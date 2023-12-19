/*// Prime number
#include <stdio.h>
int main(){
    int a,b=1;
printf("\nEnter the number\n");
scanf("%d",&a);
for (int i = 2; i < a; i++){
    b = 0;
    for (int j = 1; j < i; j++){
        if (i%j==0)
            b++;}
            if (b == 1)
                printf("%d ",i);
            }
return 0;
}
*/
#include <stdio.h>
int main(){
    int a;
printf("\nEnter the number\n");
scanf("%d",&a);
printf("1");
while (a!=1){
    for(int i = 2;i<=a;i++){
    if(a%i==0){
        printf("x%d",i);
        a = a/i;
        break;
    }}}
return 0;
}