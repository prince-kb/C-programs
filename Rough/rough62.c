/*
#include <stdio.h>
int main(){
    int a;
printf("\nEnter number of stars: ");
scanf("%d",&a);
for (int i = 1; i <= a; i++){
    for (int j = 1; j <= i; j++)
            printf("* ");
            printf("\n");}
for (int i = a-1; i >= 1; i--){
    for (int j = i; j >= 1; j--)
            printf("* ");
            printf("\n");}

return 0;
}
*/
/*
//         A
//     B    C   B
// c    D   E   D   C
#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows\n");
    scanf("%d",&a);
int b=65+a*2;
for (int i = 0; i < a; i++){
    int c=65+i*2;
    for (int l = c; l < b; l=l+2)
        printf(" ");
    for (int j = 65+i; j <= c; j++)
        printf("%c",j);
    for (int k = c-1; k >= i+65; k--)
        printf("%c",k);
    printf("\n");
}
return 0;
}
*/
#include <stdio.h>
int main(){
    int a,b,c,d;
printf("\nEnter the number of elements of the array: ");
scanf("%d",&a);
int arr[a];
printf("Enter the elements of the array\n");
for (int i = 0; i < a; i++)
    scanf("%d",&arr[i]);
    printf("Array: \n");
    for (int i = 0; i < a; i++)
        printf("%d ",arr[i]);
    
for (int i = 0; i < a; i++){
    b=0,c=0;
    for (int j = 0; j < a; j++){
        if (arr[i]==arr[j])
            b++;
    }
    if (b%2!=0 && b>1){
        printf("\n%d element is present %d times\n",arr[i],b);
    c=1;
    }
}

return 0;
}