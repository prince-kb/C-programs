#include <stdio.h>
int val(int a,int b){
if (a*10>(b/2)*10)
    printf("FIRST\n");
else if (a*10<(b/2)*10)
    printf("SECOND\n");
    else printf("ANY\n");
}
int main(){
    int A,a,b;
    scanf("%d",&A);
    for (int i = 0; i < A; i++){
        scanf("%d %d",&a,&b);
        val(a,b);
    }
    
return 0;
}