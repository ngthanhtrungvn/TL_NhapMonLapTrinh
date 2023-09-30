#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 20
void nhapMT(int a[][MAX],int &m,int &n)
{
	do
	{
		printf("Nhap so dong vao.m=");
		scanf("%d",&m);
	} while (m<0||m>MAX);
	do
	{
		printf("Nhap so cot vao.n=");
		scanf("%d",&n);
	} while (n<0||n>MAX);
	srand(time(NULL));
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			a[i][j]=rand()%11;
	
}
void xuatMT(int a[][MAX],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%5d",a[i][j]);
	printf("\n");
	}
}

void main()
{
	int m,n;
	int a[MAX][MAX];
	nhapMT(a,m,n);
	printf("\nCac phan tu trong mang la:\n");
	xuatMT(a,m,n);
	getch();
}