// 1i>Using ternary operators
// #include<stdio.h>
// int main(){
// 	int a,b,c;
// 	printf("Enter two numbers:\n");
// 	scanf("%d %d",&a,&b);
// 	c=(a>b)?a:b;
// 	printf("Greater number= %d",c);
// 	return 0;
// }

// 1ii>Using macro
// #include<stdio.h>
// #define macro(a,b) a>b?a:b
// int main(){
// 	int a,b,c;
// 	printf("Enter two numbers:");
// 	scanf("%d %d",&a,&b);
// 	c=macro(a,b);
// 	printf("Greater number =%d",c);
// 	return 0;
// }

// 2>Student's Structure
// #include<stdio.h>
// struct student{ char branch[20]; char name[20]; int roll; int marks[8];
// } st[30];
// int main(){
// int n = 30;
// printf("\nEnter information of students:");
// for(int i = 0; i < n; i++) {
//     st[i].roll = i + 1;
//     printf("\nFor Roll number : %d\n", st[i].roll);
//     printf("Branch: ");
//     scanf("%s", &st[i].branch);
//     printf("Name: ");
//     scanf("%s", &st[i].name);
//     printf("Enter marks: ");
//     for (int j = 0; j < 8; j++)
//     scanf("%d", &st[i].marks[j]);
// }
// printf("\nDisplaying Information:");
// for (int i = 0; i < n; i++) {
//     printf("\nRoll number: %d\n", i + 1);
//     printf("Branch:");
//     puts(st[i].branch);
//     printf("Name: ");
//     puts(st[i].name);
//     printf("Marks : ");
//     for (int j = 0; j < 8; j++)
//     {printf("%d ", st[i].marks[j]);}
//     printf("\n");
// }
// return 0;
// }

//3>Player's structure
// #include <stdio.h>
// struct cricket
// { char pname[20]; char tname[20]; int bat_av;} player[50];
// int main(){
//     int n = 50;
//     printf("Enter number of players\n");
//     scanf("%d",&n);
//     printf("\nEnter information of players :");
//     for (int i = 0; i < n; i++){
//         printf("\nTeam Name: ");
//         scanf("%s", &player[i].tname);
//         printf("Player Name: ");
//         scanf("%s", &player[i].pname);
//         printf("Batting Score: ");
//         scanf("%d", &player[i].bat_av);
//     }
//     int max = player[0].bat_av;
//     int res = 0;
//     for (int i = 1; i < n; i++){
//     if (player[i].bat_av > max){max = player[i].bat_av;res = i;}}
//     printf("\nDisplaying Information:");
//     for (int i = 0; i < n; i++){
//         printf("\n");
//         printf("Team Name: ");
//         puts(player[i].tname);
//         printf("Player Name: ");
//         puts(player[i].pname);
//         printf("Batting Score : %d", player[i].bat_av);
//         printf("\n");
//     }
//     printf("\nThe highest batting average is of %s of team %s",
//            player[res].pname, player[res].tname);
//     return 0;
// }