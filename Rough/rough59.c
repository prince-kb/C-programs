#include <stdio.h>
int checkprime(int i){
    int d=0;
    for (int j = 2; j <= i/2; j++){
        if (i%j==0)
            d++;
}
        if (d == 0)
            printf("%d ",i);
}
int main(){
printf("\nEnter the number to print its prime factors: ");
int a,b=0,i=0;
scanf("%d",&a);
for (int i = 2; i <= a/2; i++){
if (a%i==0)
checkprime(i);
}

return 0;
}