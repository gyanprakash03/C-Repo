#include <stdio.h>
//star pattern
int main()
{
    int type,row,i,j;
    printf("\n what type of star pattern do you want to print ?\n");
    printf(" press '0' for descending star pattern\n press '1' for ascending star pattern\n press '2' for reverse descending star pattern\n press '3' for reverse ascending star pattern\n press '4' for pyramid star pattern\n press '5' for hollow square star pattern\n");
    scanf("%d",&type);
    printf(" how many rows do you want ?\n");
    scanf("%d",&row);
    switch (type)
    {
    case 0:
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < row; j++)
            {
                if (i+j<row)
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        
        break;
    case 1:
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < row; j++)
            {
                if (j<=i)
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    case 2:
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < row; j++)
            {
                if (i<=j)
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n"); 
            
        } 
        break;
    case 3:
         for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < row; j++)
            {
                if (i+j>=row-1)
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;          
    case 4:
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < (2*row)-1; j++)
            {
                if ((row-1)-i <=j && j<= (row-1)+i)
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n"); 
        }  
        break; 
    case 5:
         for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < row; j++)
            {
                if (i==0 || i== row-1 || j==0 || j== row-1)
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    default:
        break;
    }
    return 0;
}
