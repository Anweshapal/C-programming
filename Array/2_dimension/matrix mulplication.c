#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],k,i,j,r1,r2,c1,c2;
	
	printf("MATRIX 1 \n");
	printf("enter the rows and columns");
	scanf("%d%d",&r1,&c1);
	printf("enter the elements");
	for(i=0; i<r1;i++)
	for(j=0; j<c1;j++)
	scanf("%d",&a[i][j]);
	
	printf("MATRIX 2 \n");
	printf("enter the rows and columns");
	scanf("%d%d",&r2,&c2);
	printf("enter the elements");
	for(i=0; i<r2;i++)
	for(j=0; j<c2;j++)
	scanf("%d",&b[i][j]);
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
	c[i][j]+=a[i][k]*b[k][j];
	
		
	}
}
for(i=0; i<r1; i++)
{
	for(j=0;j<c1;j++){
	printf("\t %d ",c[i][j]);
	}
	printf("\n");
	}
		
		}
	


		}
