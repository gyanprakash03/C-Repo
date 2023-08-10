#include <stdio.h>
//odd-even 
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",a);
    if (a == 1)
    {
        printf("the number is odd");
    }
    else if (a%2 == 0)
    {
        printf("the number is even");
    }
    
    else {
        printf("the number is odd");
    }
    
    return 0;
}
