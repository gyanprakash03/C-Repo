#include <stdio.h>
#include <string.h>

int main()
{
    FILE *template = NULL;
    char slip[50];
    template = fopen("template.txt", "r");
    fscanf(template, "%s", slip);
    return 0;
}
