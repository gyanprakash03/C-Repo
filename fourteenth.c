#include <stdio.h>
#include <stdlib.h>
// multiplication of matrices
int main()
{
    int row1;
    int column1;
    int row2;
    int column2;
    int sum=0;
    printf("\n Enter the number of rows and columns of the first matrix :\n  Rows(m) : ");
    scanf("%d", &row1);
    printf("  Columns(n) : ");
    scanf("%d", &column1);
    printf("\n Enter the number of rows and columns of the second matrix :\n[Note - The number of columns of first matrix should be equal to the number of rows of the second matrix]\n  Rows(m) : ");
    scanf("%d", &row2);
    printf("  Columns(n) : ");
    scanf("%d", &column2);
    int matrix1[row1][column1];
    int matrix2[row2][column2];
    int product[row1][column2];
    int i, j;
    int k;
    if (column1 == row2)
    {
        printf("\n  For the first matrix -\n");
        for (i = 1; i < row1 + 1; i++)
        {
            for (j = 1; j < column1 + 1; j++)
            {
                printf(" Enter the value of m%dn%d : ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("\n  For the second matrix -\n");
        for (i = 1; i < row2 + 1; i++)
        {
            for (j = 1; j < column2 + 1; j++)
            {
                printf(" Enter the value of m%dn%d : ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }
        printf("\n");
        for (i = 1; i < row1 + 1; i++)
        {
            for (j = 1; j < column2 + 1; j++)
            {
                for (k = 1; k < column1 + 1; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }
        printf(" The product of your two matrices is - \n");
        for (i = 1; i < row1 + 1; i++)
        {
            for (j = 1; j < column2 + 1; j++)
            {
                printf(" %d\t", product[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf(" -INVALID ENTRY- ");
    }
    return 0;
}
