
// 1>Binary to decimal
// #include <stdio.h>
// int dec_to_bin(int a){
//     int i;
//     while(a!=0){
//         printf("%d",a%2);
//         a = a/2;
//     }}
// int main(){
//     int a;
// printf("\nEnter the number\n");
// scanf("%d",&a);
// dec_to_bin(a);
// return 0;
// }

// 2>Add two floating point numbers using pointers
#include <stdio.h>
int main(){
    float a,b;
printf("\nEnter two numbers: ");
scanf("%f %f",&a,&b);
float *d = &a,*e = &b;
float f = *d+*e;
printf("%f \n",f);
return 0;
}