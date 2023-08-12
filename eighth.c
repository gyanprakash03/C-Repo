#include <stdio.h>
#include <string.h>
// forming sentence using string
int main()
{
    char name1[10];
    char name2[10];
    char str[]=" is a friend of ";
    printf(" Enter a name\n");
    gets(name1);
    printf(" Enter another name\n");
    gets(name2);
    printf("%s",strcat(name1, strcat(str,name2)));
    return 0;
}