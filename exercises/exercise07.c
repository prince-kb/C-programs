
// To store 4 drivers data
#include <stdio.h>
#include <string.h>
/* struct dv
{
    char name[50];
    char address[75];
    int phone_no;
    char route[100];
} d1, d2, d3, d4;

int main()
{
    int a, b, c, d;
first:
    printf("For the first driver\n");
    printf("Type the name\n");
    scanf("%s", &d1.name);
    printf("Type the address\n");
    scanf("%s", &d1.address);
    printf("Type the phone number\n");
    scanf("%d", &d1.phone_no);
    printf("Type the route\n");
    scanf("%s", &d1.route);

    printf("For the second driver\n");
    printf("Type the name\n");
    scanf("%s", &d2.name);
    printf("Type the address\n");
    scanf("%s", &d2.address);
    printf("Type the phone number\n");
    scanf("%d", &d2.phone_no);
    printf("Type the route\n");
    scanf("%s", &d2.route);

    printf("For the third driver\n");
    printf("Type the name\n");
    scanf("%s", &d3.name);
    printf("Type the address\n");
    scanf("%s", &d3.address);
    printf("Type the phone number\n");
    scanf("%d", &d3.phone_no);
    printf("Type the route\n");
    scanf("%s", &d3.route);

    printf("For the fourth driver\n");
    printf("Type the name\n");
    scanf("%s", &d4.name);
    printf("Type the address\n");
    scanf("%s", &d4.address);
    printf("Type the phone number\n");
    scanf("%d", &d4.phone_no);
    printf("Type the route\n");
    scanf("%s", &d4.route);

    printf("To print the drivers information press 0\n");
    scanf("%d", &a);
    switch (a)
    {
    case 0:
    second:
        printf("For first driver press 1\n");
        printf("For second driver press 2\n");
        printf("For third driver press 3\n");
        printf("For fourth driver press 4\n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("Name-%s\n", d1.name);
            printf("Address-%s\n", d1.address);
            printf("Phone number-%d\n", d1.phone_no);
            printf("Route-%s\n", d1.route);
            break;

        case 2:
            printf("Name-%s\n", d2.name);
            printf("Address-%s\n", d2.address);
            printf("Phone number-%d\n", d2.phone_no);
            printf("Route-%s\n", d2.route);
            break;
        case 3:
            printf("Name-%s\n", d3.name);
            printf("Address-%s\n", d3.address);
            printf("Phone number-%d\n", d3.phone_no);
            printf("Route-%s\n", d3.route);
            break;
        case 4:
            printf("Name-%s\n", d4.name);
            printf("Address-%s\n", d4.address);
            printf("Phone number-%d\n", d4.phone_no);
            printf("Route-%s\n", d4.route);
            break;
        default:
            printf("Wrong input\n");
            printf("To print again press 5\n");
            printf("To input again press 6\n");
            printf("To quit press 7\n");
            scanf("%d", &c);
            switch (c)
            {
            case 5:
                goto second;
                break;

            case 6:
                goto first;
                break;
            case 7:
                goto end;
                break;
            }
        }
    }

end:
    return 0;
}
OOOOOOOOOORRRRRRRRRRR
*/

struct aaloo{
	char c[100];
	 int amt;
	};
	int main(){
		int n,i;
		printf("enter the value of no. of persons \n");
		scanf("%d",&n);
		struct aaloo r[100];
				for(i=0;i<n;i++){
			printf("enter the data for %d \n",i+1);
			printf("enter the name \n");
			scanf("%s",&r[i].c);
			printf("enter the amount \n");
			scanf("%d",&r[i].amt);
		}
		for(i=0;i<n;i++){
			printf("the data for the person with serial no. %d are as follows \n",i+1);
		    printf("name= %s \n",r[i].c);
			printf("amount= %d \n",r[i].amt);
		}
		return 0;
	}