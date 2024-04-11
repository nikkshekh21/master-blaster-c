#include<stdio.h>
void square(int r, int c,int *ptr);

void main()
{
     int r,c;
	printf("Enter row size: ");
    scanf("%d",&r);
	printf("Enter column size: ");
	scanf("%d",&c); 
	int array[r][c],i,j;
		for(i=0 ; i < r ; i++)
		{
			for(j=0 ; j < c ; j++)
			{
				printf("a[%d][%d]: ",i,j);
				scanf("%d",&array[i][j]);
			}
		}
	square(r , c , array);	
}
void square(int r,int c,int *ptr)
{ 
    int i,j,cubes,value;
    printf("\n\n--:The cube of your array:--\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			value = *((ptr+i*c)+j);
			cubes = value*value;
		
			printf("a[i][j]:%d\n",cubes);
		}
		printf("\n");
	}

}