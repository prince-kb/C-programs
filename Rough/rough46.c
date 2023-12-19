// #include <stdio.h>
// int main(){
//     int a;
// printf("\nEnter the number\n");
// scanf("%d",&a);
// printf("Prime numbers are:");
//     for(int i = 1;i<a;i++){
//         int k=0;
//         for (int j = 1; j < i; j++){
//             if (i%j==0)
//                 k++;}
//         if (k == 1)
//            printf("%d ",i);}
// return 0;
// }

#include <stdio.h>
int main(){
printf("%s \n",__TIME__);
printf("%s \n",__DATE__);
printf("%s \n",__FILE__);
printf("%d \n",__STDC__);
printf("%d \n",__LINE__);
return 0;
}
