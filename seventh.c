#include <stdio.h>
// add, subtract and reassign
void sum_and_switch (int* p,int* q) {
    int add= *p+*q;
    int sub= *p-*q;
    *p=add;
    *q=sub;
}
int main()
{
    int a,b;
    printf(" Enter two numbers 'a' and 'b'\n");
    scanf("%d\n%d",&a,&b);
    sum_and_switch(&a,&b);
    printf("the sum of two numbers is %d and the difference of two numbers is %d\n",a,b);
    return 0;
}
