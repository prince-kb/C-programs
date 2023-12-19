#include <stdio.h>
#define MAX 5
#define true 1
int cqueue[MAX],front=-1,rear=-1;
void insert(){
if (rear==MAX-1 && front==0 || front==rear+1){
    printf("QUEUE OVERFLOW\n");
    return;}
if (rear==MAX-1)
   rear=0; 
   else rear++;
   if (front==-1)
    front++;
   
printf("Type the number\n");
scanf("%d",&cqueue[rear]);
}
void delete(){
    if (front==-1){
        printf("QUEUE UNDERFLOW\n");
        return;
        }
    else
        printf("Deleted item is %d\n",cqueue[front]);
    if (front==rear)
        front==-1;
        rear==-1;
    if (front==MAX-1)
        front=0;
    else front++;
}
void peep(){
    if (front==-1)
        printf("NO ITEMS, ADD SOME\n");
    else if (front>rear){
        for (int i = front; i < MAX; i++)
            printf("%d\n",cqueue[i]);
        for (int i = 0; i <= rear; i++)
            printf("%d\n",cqueue[i]);
        for (int i = rear+1; i < front; i++)
            printf("||\n");
    }
    else{
        for (int i = 0; i < front; i++)
            printf("||\n");
        for (int i = front; i <= rear; i++)
            printf("%d\n",cqueue[i]);
        for (int i = rear+1; i < MAX; i++)
            printf("||\n");
    }
}
int main(){
    int a;
    while (true){
printf("\n1>INSERT\t2>DELETE\t3>PEEP\t4>EXIT: ");
scanf("%d",&a);
switch (a)
{
case 1:
    insert();
    break;
case 2:
    delete();
    break;
case 3:
peep();
break;
default:
    break;
}}
return 0;
}