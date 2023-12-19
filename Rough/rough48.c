// push,pop,peep
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX],top = 0;
void push(void);
void pop(void);
void peep(void);
int main(){
    int a;
    while(1){
printf("\n\tSTACK MENU\n1.PUSH\n2.POP\n3.PEEP\n4.EXIT");
printf("\nEnter your choice: ");
scanf("%d",&a);
switch(a){
    case 1: push();
    break;
    case 2:pop();
    break;
    case 3: peep();
    break;
    case 4: exit(0);
    default:printf("\nWRONG INPUT\t RETRY\n");
    } } 

return 0;
}
void push(void){
if (MAX == top) 
printf("\nSTACK OVERFLOW\n");
else {
    int item;
    printf("\nEnter element to push: ");
    scanf("%d",&item);
stack[top] = item;
top++;
    }}
void pop(void){
if (top == 0)
    printf("\nSTACK UNDERFLOW\n");
    else{
        printf("\nPopped element is %d\n",stack[top-1]);
        top--;
    }}
    void peep(void){
for (int i = MAX-1; i > top-1; i--)
    printf("\n--");
for (int j = top-1; j >= 0; j--)
    printf("\n%d",stack[j]);
    }