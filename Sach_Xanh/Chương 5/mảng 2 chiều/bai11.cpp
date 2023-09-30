#include<conio.h>
#include<stdio.h>
#define MAXCOT 50
#define MAXDONG 100
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
			{printf("Nhap a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);}
	}
}

void xuatMT(int a[][MAXCOT],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
int kTra(int a[][MAXCOT],int m,int n)
{
	if(m==n)
		return 1;
	return -1;
}
void main()
{
	int n,m;
	int a[MAXDONG][MAXCOT];
	nhapMT(a,m,n);
	printf("\nMa tran:\n");
	xuatMT(a,m,n);
	int kq=kTra(a,m,n);
	if(kq==1)
		printf("\nMa tran vuong");
	else
		printf("\nMa tran khong vuong");
	getch();
}