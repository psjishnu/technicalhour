#include<stdio.h>
void sqfour();
int a[2][4];
int main()
{
	int i,j;
	printf("enter val");
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<2;i++)
	{	printf("\n");
		for(j=0;j<4;j++)
		{
			printf("\t%d",a[i][j]);
			
		}
	}
	sqfour();
}

void sqfour()
{	printf("\n");
	if(a[0][0]==1 && a[0][1]==1 && a[1][0]==1 && a[1][1]==1)
		printf("expre is b");
	else if(a[0][1]==1 && a[1][1]==1 && a[0][2]==1 && a[1][2]==1)
		printf("expre is C");
	else if(a[0][2]==1 && a[1][2]==1 && a[0][3]==1 && a[1][3]==1)
		printf("expre is B");
	else if(1 && a[0][3]==1 && a[1][3]==1 && a[0][0]==1 && a[0][1]==1)
		printf("expre is c");
	else if(a[0][0]==1 && a[0][1]==1 && a[0][2]==1 && a[0][3]==1)
		printf("expr is a");
	else if(a[1][0]==1 && a[1][1]==1 && a[1][2]==1 && a[1][3]==1)
		printf("expre is A");
	printf("\n");
}
