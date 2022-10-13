#include<stdio.h>

void main()
{
    int arr[12][12];
    int i,j,row,col,count=0;

	printf("Enter the number of rows and columns for 1st matrix\n");
	printf("your matrix row= ");
	scanf("%d",&row);
	printf("\n your matrix columb= ");
	scanf("%d",&col);
 

//-----------------------------------------------------------------------------
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
	    printf("\n arr[%d][%d]=",i,j);	
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t ",arr[i][j]);
        }                                                                          
        printf("\n");
    }
//-------------------------------------------------------------------------------  

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]==0)
            count++;
        }                                                                          
        printf("\n");
    }
}