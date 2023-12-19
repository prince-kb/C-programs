#include <stdio.h>
#include <stdlib.h>
#define MAXSTACK 7
int a,b,top=-1,stack[MAXSTACK];
int main(){
    while(1){
    printf("\tSTACK MENU\t1.PUSH\t2.POP\t3.PEEP\t4.EXIT\n");
printf("\nEnter your choice: ");
scanf("%d",&a);
switch (a){
case 1:
if (top==MAXSTACK-1)
    printf("STACK OVERFLOW\n");
    else {
        printf("Enter the element to push\n");
scanf("%d",&b);
        top++;
    stack[top]=b;
}
break;
case 2: 
if (top==-1)
        printf("STACK UNDERFLOW\n");
        else {
            printf("Popped element is %d\n",stack[top]);
            top--;}
break;
case 3: 
        for (int i = MAXSTACK-1; i > top; i--)
            printf("--\n");
 for (int i = top; i >=0; i--)
        printf("%d\n",stack[i]);
 break;
case 4: goto end;
default:
printf("Wrong input TRY AGAIN\n");
    break;
}}
end:
printf("THANK YOU\n");
return 0;
}
