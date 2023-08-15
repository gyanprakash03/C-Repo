#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// employee id manager
int main()
{
    int k;
    one:
    printf("1. How many characters are in your employee ID : ");
    scanf("%d", &k);
    char *num;
    num = (char *)calloc(k, sizeof(char));
    printf(" Enter your employee ID : ");
    scanf("%s",num);
    if (strlen(num)==k)
    {
        printf("--> Your employee id is : %s\n",num);
    }
    else
    {
        printf(" Error : Invalid entry\n");
        goto one;
    }
    int l;
    two:
    printf("2. How many characters are in your employee ID : ");
    scanf("%d", &l);
    char* num2;
    num2 = (char*)realloc(num,l*sizeof(char));
    printf(" Enter your employee ID : ");
    scanf("%s",num2);
    if (strlen(num2)==l)
    {
        printf("--> Your employee id is : %s\n",num2);
    }
    else
    {
        printf(" Error : Invalid entry\n");
        goto two;
    }
    int m;
    three:
    printf("3. How many characters are in your employee ID : ");
    scanf("%d", &m);
    char* num3;
    num3 = (char*)realloc(num,l*sizeof(char));
    printf(" Enter your employee ID : ");
    scanf("%s",num3);
    if (strlen(num3)==m)
    {
        printf("--> Your employee id is : %s\n",num3);
    }
    else
    {
        printf(" Error : Invalid entry\n");
        goto three;
    }
    return 0;
}
