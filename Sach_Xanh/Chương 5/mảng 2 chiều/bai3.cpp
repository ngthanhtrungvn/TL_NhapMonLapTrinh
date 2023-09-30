#include<conio.h>
#include<stdio.h>
#define MAXCOT 50
#define MAXDONG 50
void nhapMT(int a[][MAXCOT],int &m,int &n)
{
		do
	{
		printf("Nhap so dong vao:");
		scanf("%d",&m);
		printf("Nhap so cot vao:");
		scanf("%d",&n);
	} while (n<0||m<0||n>MAXCOT||m>MAXDONG);
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{	int x;
			do
			{
				printf("Nhap a[%d][%d]=",i,j);
				scanf("%d",&x);
			} while(x%2==1);
			a[i][j]=x;
		}
	}
}
void main()
{
	int m,n;
	int a[MAXDONG][MAXCOT];
	nhapMT(a,m,n);
	getch();
}