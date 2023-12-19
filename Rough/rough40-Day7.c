// 1>Max and min of an array using function
// #include <stdio.h>
// int func(int array[],int n){
//         int max,min;
//         max = array[0],min = array[0];
//     for (int i = 1; i < n; i++){
//         if (array[i]>max)
//             max = array[i];
//         if (array[i]<min)
//             min = array[i];
//     }  
//     printf("MAX = %d\n",max);
//     printf("MIN = %d\n",min);
//     }
// int main(){
//     int n;
// printf("\nEnter number of elements of the array\n");
// scanf("%d",&n);
// int array[n];
// for (int i = 0; i < n; i++){
//     printf("Enter %d element\n",i);
//     scanf("%d",&array[i]);
// }
// func(array,n);
// return 0;
// }

//2>all sorting operations
// #include<stdio.h>
//  void insert(int arr[], int i){
//         while(i!=0&&arr[i-1]>arr[i]){
//             int temp = arr[i];
//             arr[i] = arr[i-1];
//             arr[i-1] = temp;
//             i--;
//         }}
// void insertionSort(int arr[], int n){
//         if(n==1) return;
//         for(int i=1;i<n;i++)
//             insert(arr,i);   
//     }
// void bubbleSort(int arr[], int n){
//     for (int x = 0; x < n-1; x++) {
//         for(int y = 0; y < n - x - 1; y++){      
//             if(arr[y] > arr[y + 1]){               
//                 int temp = arr[y];
//                 arr[y] = arr[y + 1];
//                 arr[y + 1] = temp;
//             }}}}
// void selectionSort(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         int min_ind = i;
//         for(int j = i + 1; j < n; j++){
//             if(arr[j] < arr[min_ind]){
//                 min_ind = j;
//             }}
//         int temp=arr[i];
//         arr[i]=arr[min_ind];
//         arr[min_ind]=temp;
//     }   }
// int main(){
//     printf("Choose one given below: \n1. Bubble Sort \n2. Insertion Sort \n3. Selection Sort\n");
//     char x;
//     int n;
//     scanf("%c",&x);
//     printf("Enter size : ");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         scanf("%d",&arr[i]); 
//     switch(x){
//         case '1':
//             bubbleSort(arr,n);
//             printf("in ascending order\n");
//             for (int i = 0; i < n; i++)
//             printf("%d ",arr[i]);
//             printf("\n in descending order\n");
//             for (int i = n-1; i>=0; i--)
//             printf("%d ",arr[i]);
// 			break;
//         case '2':
//             insertionSort(arr,n);
//             printf("in ascending order\n");
// 			for (int i = 0; i < n; i++)
//             printf("%d ",arr[i]);
//             printf("\n in descending order\n");
//             for (int i = n-1; i >=0; i--)
//             printf("%d ",arr[i]);
// 			break;
//         case '3':
//             selectionSort(arr,n);
//             printf("in ascending order\n");
// 			for (int i = 0; i < n; i++)
//             printf("%d ",arr[i]);
//             printf("\n in descending order\n");
// 			for (int i = n-1; i >=0; i--)
//             printf("%d ",arr[i]);
// 			break;
//         default:
//         printf("\nre-enter");}
// return 0;
// }

// 3>lower,upper or digit
// #include <stdio.h>
// #include<ctype.h>
// void check(char ch){
//      if(isdigit(ch))
//             printf("%c is digit\n ",ch);
//          else if(islower(ch))
//             printf("%c is lower case\n ",ch);
//         else
//             printf("%c is upper case\n ",ch);}
// int main()
// {
// 	printf("\n enter 10 characters \n");
//     char ch[10];
//     for (int i=0;i<10; i++){
//         scanf("%c",&ch[i]);
//        check(ch[i]);}
//        return 0;}

// 4>concantenate two strings
// #include<stdio.h>
// #include<string.h>
// int main(){
// 	char a[100],b[100],c[100];
// 	printf("enter the 1st string\n");
// 	gets(a);
// 	printf("enter the 2nd string\n");
// 	gets(b);
// 	strcpy(c,(strcat(a,b)));
// 	puts(c);
// 	return 0;
// }

// 5>count number of words and spaces in a line
// #include<stdio.h>
// #include<ctype.h>
// #include<string.h>
// int main(){
//     int n = 10;
//     int vo = 0, sp = 0, ct = 0;
//     char ch[n];
//     printf("Enter the line\n");
//     for (int i = 0; i < n; i++){
//         scanf("%c",&ch[i]);}
//     for (int i = 0; i < n; i++){
//        char chr = tolower(ch[i]);
//         if(chr == 'a'||chr=='e'||chr=='i'||chr=='o'||chr=='u')
//             vo++;
//         else if(chr ==' ')
//             sp++;
//         else
//             ct++; }
//     printf("\n Number of vowels= %d",vo);
//     printf("\n Number of consonants= %d",ct);
//     printf("\n Number of spaces= %d",sp);
// return 0;}

// 6>Remove repeated characters
// #include<stdio.h> 
// #include<string.h>
// int main(){
// char str[50];
// int n,i,j,k;
// printf("Enter the string\n ");
// gets(str);
// n=strlen(str);
// for(i=0;i<n;i++){
// 	for(j=i+1;j<n;j++){
// 		if(str[i]==str[j]){
// 			for(k=j;k<n;k++)
// 				str[k]=str[k+1];
// 				j--;
// 				n--;
// 				}}}
// puts(str);
// return 0;}

// 7>delete specified characters from string
// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     char str[50],a;
// printf("\nEnter the string\n");
// gets(str);
// printf("Enter the character to be removed\n");
// scanf("%c",&a);
// for (int i = 0; i < 50; i++){
//     if (str[i] == a){
//         for (int j = i; j < 49; j++)
//             str[j] = str[j+1];
//             i--;
//          }}
//          puts(str);
// return 0;
// }

// 8>Reversing a string
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[50];
// printf("\nEnter the string\n");
// gets(str);
// puts(strrev(str));
// return 0;
// }

// 9>concatenate two strings, extract a substring from astring, replace a substring in a string and to find the length of a string
// #include<stdio.h>
// void length(){
// 	int i=0,length=0;
// 	char a[100];
// 	printf("Enter the string\n");
//     scanf("%s",&a);
//     while(a[i]!='\0'){
//     	length++;
//     	i++;}
// 	printf("\nlength= %d",length);
// }
// void replace(){
// 	int m,i,j=0,start,end;
//     printf("Enter the size of string\n");
//     scanf("%d",&m);
//     char a[m];
// 	printf("Enter the string\n");
//     scanf("%s",&a);
//     printf("Enter the starting and end position for replacement\n");
//     scanf("%d %d",&start,&end);
//     char b[end-start+1];
// 	printf("Enter the sub-string\n");
//     scanf("%s",&b);
//     for (int i = start-1; i < end; i++){
//         a[i] = b[j];
// 		j++;}  
//     printf("%s\n", a); }
// void substring(){
// 	int m,i,j=0,start,end;
//     printf("Enter the size of string\n");
//     scanf("%d",&m);
//     char a[m];
// 	printf("Enter the string\n");
//     scanf("%s",&a);
//     printf("Enter the starting and end position for extraction\n");
//     scanf("%d %d",&start,&end);
//     char st[end-start+1];
//     for(i=start-1;i<end;i++){
//     	st[j]=a[i];
//     	j++;}
// 	for(i=0;i<(end-start+1);i++)
// 	printf("%c",st[i]);
// 	printf("\n");    }
// void concate(){
// 	int m, n;
//     printf("Enter the size of 1st string\n");
//     scanf("%d",&m);
//     char a[m];
// 	printf("Enter 1st string\n");
//     scanf("%s",&a);
//     printf("Enter the size of 2nd string\n");
//     scanf("%d",&n);
//     char b[n];
// 	printf("Enter 1st string\n");
//     scanf("%s",&b);
//     char c[200];
//     for (int i = 0; i < m; i++)
//         c[i] = a[i]; 
//     for (int i = 0; i < n; i++)
//         c[m+i] = b[i];
//     printf("%s\n", c);}
// int main(){
// concate();   
// substring(); 
// replace();    
// length();
// return 0;
// }