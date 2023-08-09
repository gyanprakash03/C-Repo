#include <stdio.h>
//gift alloting
int main()
{
    char subject;
    const char s = 's',m = 'm',b = 'b';
    printf("which subject(s) have u you passed in\nEnter 's' for science, 'm' for maths and 'b' for both\n");
    scanf("%c",&subject);
    switch (subject)
    {
        case 's':
            printf("your gift is $15");
        break;
        case 'm':
            printf("your gift is $20");
        break;
        case 'b':
            printf("your gift is $45");
        break;
    default:
        printf("no gift for you");
        break;
    }
    return 0;
}
