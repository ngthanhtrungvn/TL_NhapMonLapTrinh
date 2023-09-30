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
void xuatChanDongk(int a[][MAXCOT],int m,int n,int k)
{
	for(int i=0;i<m;i++)
	{
		if(i==k)
			for(int j=0;j<n;j++)
				if(a[k][j]%2==0)
					printf("%5d",a[i][j]);
	}
}
void xuatLeCotk(int a[][MAXCOT],int m,int n,int k)
{
	for(int i=0;i<m;i++)
	{
			for(int j=0;j<n;j++)
				if(j==k&&a[i][j]%2==1)
					printf("%5d",a[i][j]);
	}
}
void main()
{
	int n,m;
	int a[MAXDONG][MAXCOT];
	nhapMT(a,m,n);
	printf("\nMa tran:\n");
	xuatMT(a,m,n);

	int k;
	printf("\nNhap vao dong ban muon xuat so chan:");
	scanf("%d",&k);

	printf("So chan o dong %d:",k);
	xuatChanDongk(a,m,n,k);

	int b;
	printf("\nNhap vao cot ban muon xuat so le:");
	scanf("%d",&b);

	printf("So le o cot %d:",b);
	xuatLeCotk(a,m,n,b);
	getch();
}