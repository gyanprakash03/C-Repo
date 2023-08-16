#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// checking palindrome
int main()
{
    char* num=(char*)calloc(15,sizeof(char));
    char* num2=(char*)calloc(15,sizeof(char));
    printf(" Enter a number : ");
    scanf("%s",num);
    strcpy(num2,num);
    strrev(num2);
    int output= strcmp(num,num2);
    if (output==0)
    {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}

