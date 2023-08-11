#include <stdio.h>
//fibonacci series
int fibonacci(int a)
{
    if (a == 1 || a == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(a - 1) + fibonacci(a - 2));
    }
}
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    printf("number %d in fibonacci series is %d",num,fibonacci(num));
    return 0;
}
