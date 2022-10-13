#include<stdio.h>
void main()
{
	int arr[10];
	int i,j;

	for(i=0;i<3;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(j=1;j<11;++j)
	{
		printf("\n %d * %d = %d ",arr[0],j,arr[0]*j );
		printf("\t %d * %d = %d ",arr[1],j,arr[1]*j );
		printf("\t %d * %d = %d ",arr[2],j,arr[2]*j );	
	}
}