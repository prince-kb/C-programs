/*
// 1> Write a program in C to compute average of three floating point numbers, which may be positive 
or negative.
#include <stdio.h>
int main()
{
    float a,b,c,d;
printf("Type the first number: ");
scanf("%f",&a);
printf("\nType the second number: \n");
scanf("%f",&b);
printf("\nType the third number: \n");
scanf("%f",&c);
d = (a+b+c)/3;
printf("The average is %f\n",d);
return 0;
}
*/
/*
// 2>Write a program in C to swap two numbers (i) using a third variable 
#include <stdio.h>
int main()
{
    int a,b,c;
printf("Type first number: ");
scanf("%d",&a);
printf("Type second number: ");
scanf("%d",&b);
printf("Before swapping: %d %d",a,b);
c = a; a = b; b = c;
printf("         After swapping: %d %d",a,b);
return 0;
}
*/
/*
// 2>Write a program in C to swap two numbers (ii) without using a third variable
#include <stdio.h>
int main()
{
    int a,b;
printf("Type first number: ");
scanf("%d",&a);
printf("Type second number: ");
scanf("%d",&b);
printf("Before swapping: %d %d",a,b);
printf("After swapping: %d %d",b,a);
return 0;
}
*/
/*
// 3. Write a program in C to check whether a person is eligible for vote or not.
#include <stdio.h>
int main()
{
    int a;
printf("Type your age: ");
scanf("%d",&a);
if (a<18)
{
    printf("You are not eligible to vote");
}
else printf("You are elgible to vote");

return 0;
}
*/
/*
// 4. Write a program in C to find the greatest of three numbers using nested if structure and without using AND operator.
#include <stdio.h>

int main()
{
    int a,b,c;
printf("Type first number: ");
scanf("%d",&a);
printf("Type second number: ");
scanf("%d",&b);
printf("Type third number: ");
scanf("%d",&c);
if (a>=b)
{
    if(a>=c){
        printf("%d is greatest",a);
    }
    else printf("%d is greatest",c);
}
else if (b>=c){
    printf("%d is greatest",b);
}
else printf("%d is greatest",c);
  
return 0;
}
*/
/*
// 5. Write a program in C to find the greatest of three numbers using AND operator.
#include <stdio.h>
int main()
{
    int a,b,c;
printf("Type the first number: ");
scanf("%d",&a);
printf("Type the second number: ");
scanf("%d",&b);
printf("Type the third number: ");
scanf("%d",&c);
if (a>=b && a>=c)
{
    printf("First number-%d is greatest",a);
}
else if(b>=c && b>=a){
    printf("Second number-%d is greatest",b);
}
else
    printf("Third number-%d is greatest",c);
return 0;
}
*/
/*
// Write a program in C to enter the marks of a student in four subjects. Then calculate the total, aggregate, and display the grades obtained by the student.
#include <stdio.h>
int main()
{
    int a,b,c,d;
    float e;
printf("Enter your marks in subject1: ");
scanf("%d",&a);
printf("Enter your marks in subject2: ");
scanf("%d",&b);
printf("Enter your marks in subject3: ");
scanf("%d",&c);
printf("Enter your marks in subject4: ");
scanf("%d",&d);
e = (a+b+c+d)/4;
printf("Total Marks-400  Obtained Marks-%d  Percentage obtained-%0.2f\n",(int)e*4,e);
if(e>90){
    printf("You got Grade A\n");
}
else if(e<=90 && e>=70){
    printf("You got Grade B\n");
}
else if(e<70 && e>=50){
    printf("You got Grade C\n");
}
else 
printf("You got grade D");
return 0;
}
*/
/*

// Write a program in C to check whether a number entered is positive, negative, or equal to zero using if-else-if structure
#include <stdio.h>
int main()
{
    int a;
printf("Type the number: ");
scanf("%d",&a);
if (a>0)
{
    printf("Entered number,%d is a positive number",a);
}
else if(a == 0){
    printf("Entered number,%d is equal to zero",a);
}
else if(a<0){
    printf("Entered number,%d is a negative number",a);
}
return 0;
}
*/
/*
// Write a program in C to check whether an entered character is vowel or consonant.
#include <stdio.h>
int main()
{
    char w;
printf("Type the character: ");
scanf("%c",&w);
switch(w){
    case 'a' : printf("VOWEL\n");
    break;
    case 'e' : printf("VOWEL\n"); 
    break;
    case 'i' : printf("VOWEL\n"); 
    break;
    case 'o' : printf("VOWEL\n"); 
    break;
    case 'u' : printf("VOWEL\n"); 
    break;
    case 'A' : printf("VOWEL\n"); 
    break;
    case 'E' : printf("VOWEL\n"); 
    break;
    case 'I' : printf("VOWEL\n"); 
    break;
    case 'O' : printf("VOWEL\n"); 
    break;
    case 'U' : printf("VOWEL\n"); 
    break;
    default:
printf("CONSONANT");
}
return 0;
}
*/