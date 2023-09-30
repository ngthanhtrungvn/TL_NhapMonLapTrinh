#include<conio.h>
#include<stdio.h>
#define MAXCOT 50
#define MAXDONG 100
void nhapMaTran(int a[][MAXCOT],int &m,int &n)
{
	do
	{
		printf("Nhap vao so dong: ");
		scanf("%d",&m);
	}while(m<=0);

	do
	{
		printf("Nhap vao so cot: ");
		scanf("%d",&n);
	}while(n<=0);

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			{printf("Nhap a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);}
	}
}
void xuaMaTranDao(int a[][MAXCOT],int m,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			printf("%5d",a[j][i]);
			printf("\n");
	}
}
void main()
{
	int n,m;
	int a[MAXDONG][MAXCOT];
	nhapMaTran(a,m,n);
	printf("\nMa tran dao la:");
	xuaMaTranDao(a,m,n);
	getch();
}