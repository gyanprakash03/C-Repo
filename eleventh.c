#include <stdio.h>
#include <string.h>
// travel agency manager
struct databook
{
    char name[15];
    int liscense_no[13];
    char route[30];
    int distance[10];
};
struct databook one,two,three;
int main()
{
    int number;
    printf("\n { WELCOME TO TRAVEL AGENCY DATABOOK }\n\n");
    printf(" Enter your driver number (1 , 2 or 3) :\n");
    scanf("%d",&number);
    switch (number)
    {
    case 1:
        printf(" Enter your name (enter underscores instead of spaces) :\n--> ");
        scanf("%s",&one.name);
        printf(" Enter your drivimg liscense number :\n--> ");
        scanf("%d",&one.liscense_no);
        printf(" Enter your route (enter underscores instead of spaces) :\n--> ");
        scanf("%s",&one.route);
        printf(" Enter the distance you have travelled (in KMs) :\n-->");
        scanf("%d",&one.distance);
        printf("\n");
        printf(" { ThankYou }\n\n");
        printf(" Your name is : %s\n",one.name);
        printf(" Your Driving liscense no. is : %d\n",one.liscense_no);
        printf(" Your current route is : %s\n",one.route);
        printf(" Total distance covered : %d\n",one.distance);
        break;
    case 2:
        printf(" Enter your name (enter underscores instead of spaces) :\n--> ");
        scanf("%s",&two.name);
        printf(" Enter your drivimg liscense number :\n--> ");
        scanf("%d",&two.liscense_no);
        printf(" Enter your route (enter underscores instead of spaces) :\n--> ");
        scanf("%s",&two.route);
        printf(" Enter the distance you have travelled (in KMs) :\n-->");
        scanf("%d",&two.distance);
        printf("\n");
        printf(" { ThankYou }\n\n");
        printf(" Your name is : %s\n",two.name);
        printf(" Your Driving liscense no. is : %d\n",two.liscense_no);
        printf(" Your current route is : %s\n",two.route);
        printf(" Total distance covered : %d\n",two.distance);
        break;
    case 3:
        printf(" Enter your name (enter underscores instead of spaces) :\n--> ");
        scanf("%s",&three.name);
        printf(" Enter your drivimg liscense number :\n--> ");
        scanf("%d",&three.liscense_no);
        printf(" Enter your route (enter underscores instead of spaces) :\n--> ");
        scanf("%s",&three.route);
        printf(" Enter the distance you have travelled (in KMs) :\n-->");
        scanf("%d",&three.distance);
        printf("\n");
        printf(" { ThankYou }\n\n");
        printf(" Your name is : %s\n",three.name);
        printf(" Your Driving liscense no. is : %d\n",three.liscense_no);
        printf(" Your current route is : %s\n",three.route);
        printf(" Total distance covered : %d\n",three.distance);
        break;
    default:
        break;
    }
    return 0;
}
