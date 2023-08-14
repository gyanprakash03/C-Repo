#include <stdio.h>
#include <string.h>
// reversing an array
void array_rev (int arr[]) {
    int temp,i;
    for ( i = 0; i < 5; i++)
    {
        temp=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temp;
    }
}
int main()
{
    int elements[10];
    int i;
    printf(" Enter the 10 elements of the array you want to reverse :\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&elements[i]);
    }
    array_rev(elements);
    for ( i = 0; i < 10; i++)
    {
        printf("%d, ",elements[i]);
    }
    
    return 0;
}
