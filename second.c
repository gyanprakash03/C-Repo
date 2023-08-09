#include <stdio.h>
//multiplication table
int main()
{
    int num,i=1;
    printf("Enter a number\n");
    scanf("%d",&num);
    do
    {
        printf("%d x %d = %d\n",num,i,num*i);
        i=i+1;
    } while (i<11);
    
    return 0;
}
