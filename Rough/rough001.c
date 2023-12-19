// Find the Arithmetic series or Geometric series

#include <stdio.h>
int main()

{
    int p,d,n,i,m,a,b,c,e,l,z,q,r;
    int gp[30]; 
    int ap[50];
    jaao:
    
    printf("For Arithmetic Progression(AP) series type 1\n");
    printf("For Geometic Progression(GP) series type 2\n");
    scanf("%d",&p);
   switch(p){
       case 1: printf("Type the first term of the AP Series: ");
    scanf("%d", &p);
    printf("Type the common difference of the AP Series: ");
     scanf("%d", &d);
    printf("Type the term upto which you want the AP Series: ");
     scanf("%d", &n);
     printf("\n");
     for ( i = 0; i <= n ; i++)
     {
        //  printf("a%d=%d\n" ,i ,p+d*i);  
         ap[i] = p+d*i;
     }  
     aao:
     printf("For an AP term type 1\n");
printf("For AP series type 2\n");
scanf("%d",&q);
printf("\n");
if(q==1){
    printf("Type the term you want\n");
scanf("%d",&r);
printf("The a%d term is %d\n",r,ap[r]);
break;
} 
else if(q == 2){

for(int i;i<n;i++){
    printf("%d ",ap[i]);
}break;
}
     else
    printf("Wrong input\n");
    goto aao;
    break;

     case 2:
printf("\nType the first term of the GP: ");
scanf("%d",&a);
printf("Type the common ratio of the GP: ");
scanf("%d",&b);
printf("Type the number of terms you want in the GP: \n");
scanf("%d",&c);
    e == a;
// printf("The GP series is \n");
for (int i = 0; i < c; i++)
{
    gp[i] = a;
    a=b*a;
}
firse:
printf("For a GP term type 1\n");
printf("For GP series type 2\n");
scanf("%d",&l);
printf("\n");
if(l == 1){
    printf("Type the term you want\n");
scanf("%d",&z);
printf("The a%d term is %d\n",z,gp[z]);
    break;
}
else if(l == 2){
for(int i=0;i<c;i++){
    printf("%d ",gp[i]);
}
break;
}
else
{
printf("\nWrong input\n");
goto firse;
break;
}
    
     default:
     printf("\nWrong input\n");
     printf("Try again\n");
     goto jaao;
   }
    return 0;
}
