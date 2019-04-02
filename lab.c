#include<stdio.h>
void sqfour();
void one();
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
	else if(1 && a[0][3]==1 && a[1][3]==1 && a[0][0]==1 && a[1][0]==1)
		printf("expre is c");
	else if(a[0][0]==1 && a[0][1]==1 && a[0][2]==1 && a[0][3]==1)
		printf("expr is a");
	else if(a[1][0]==1 && a[1][1]==1 && a[1][2]==1 && a[1][3]==1)
		printf("expre is A");
	printf("\n");
}
void one()
{   
	printf("\n");
    int i,j,x,y;
    char arr[3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        if(a[i][j]==1)
        {
            x=i;
            y=j;
        }
            
    }
    if(x==0)
    {
        arr[0]='a';
        if(y==0) {   arr[1]='b'; arr[2]='c';}
        else if(y==1){   arr[1]='b'; arr[2]='C';}
        else if(y==2){   arr[1]='B'; arr[2]='C';}
        else{ arr[1]='B'; arr[2]='c'; }
    }
    else if(x==1)
    {
        arr[0]='A';
        if(y==0) {   arr[1]='b'; arr[2]='c';}
        else if(y==1){   arr[1]='b'; arr[2]='C';}
        else if(y==2){   arr[1]='B'; arr[2]='C';}
        else{ arr[1]='B'; arr[2]='c'; }
    }	
    	printf("\n expre is:");
	for(i=0;i<3;i++)
		printf("%c",arr[i]);
	printf("\n");       
}




















