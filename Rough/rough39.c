#include<stdio.h>
int main(){
int a,b=1,c;
scanf("%d",&a);
for (int i = 1; i <= a; i++)
{ 
    b = 1;
    c = i;
    for (int j = 1; j <= i; j++){
        b = b * c;
    }
    printf("%d\n",b);
}

return 0;
}