/*Input a matrix and display */
#include<stdio.h>
#include<stdlib.h>

int** createMatrix(int,int); /* prototype to allocate space for matrix, arguments are no. of rows and no. of columns */
void inputMatrix(int **,int,int);  /* prototype to populate matrix, arguments are pointer to a 2d array, no. of rows and no. of columns */
void displayMatrix(int **,int,int); /* prototype to display elements of the matrix, arguments are pointer to a 2d array, no. of rows and no. of columns */

int main(void)
{
	int **a, row, col;
	printf("Enter order of the matrix (row and column) \n");
	scanf("%d%d",&row,&col);
	a=createMatrix(row,col);                   //function call to create/allocate memory for first matrix
    printf("Enter elements for the matrix \n");
	/*function call to input matrix*/
	inputMatrix(a,row,col);
    printf("Matrix:\n");
	/*function call to display matrix*/
	displayMatrix(a,row,col);

	return 0;
}/* end of main */

int** createMatrix(int row,int col)
{

    int **a=(int*)malloc(row * sizeof(int*));
    for(int i=0;i<row;i++)
    {
        a[i]=(int)malloc(col * sizeof(int));
    }
    return a;
}

void inputMatrix(int **a,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void displayMatrix(int **a,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

