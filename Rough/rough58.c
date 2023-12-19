#include <stdio.h>
#include <string.h>
    int i=0,j=0,k=0,l=0,a;
    char strq[100],stack[100],strp[100];

int main(){
printf("\nEnter the algebra(only one digit numbers): ");
gets(strq);
// puts(strq);
a=strlen(strq);
// printf("%d  \n",strlen(strq));
for (int i = a; i > 0; i--){
  strq[i]=strq[i-1];
}
strq[i]='(',strq[a+1]=')';
puts(strq);

while (strq[i]!='\0'){
    if (strq[i]=='0'||strq[i]=='1'||strq[i]=='2'||strq[i]=='3'||strq[i]=='4'||strq[i]=='5'||strq[i]=='6'||strq[i]=='7'||strq[i]=='8'||strq[i]=='9'){
     j++;
      strp[j]=strq[i];  
    }
    if (strq[i]=='('){
      k++;
      stack[k]=strq[i];
    }
    
    if (strq[i]=='+' || strq[i]=='-'){
            while (1){
          if (stack[k]=='+' || stack[k]=='-'){
              j++;
              strp[j]=stack[k];
              k--;}
              else if (stack[k]=='('){
                break;
              }
      k++;
      stack[k]=strq[i];
      break;
    }}
    
    if (strq[i]=='*' || strq[i] =='/'){
        while (1){
                if (stack[k] == '*' || stack[k] == '/'){
                  j++;
              strp[j]=stack[k];
              k--;
              }
              else{
                k++;
                stack[k]=strq[i];
                break;
              }}}
    
    if (strq[i]==')'){
      while (1){
        j++;
        strp[j]=stack[k];
        k--;
        if(stack[k]=='('){
          k--;
          break;
      }}}
      if (strq[i]='\0')
        break;
        
      i++;
      }
      printf("P: ");
puts(strp);
printf("Stack: ");
puts(stack);
return 0;
}