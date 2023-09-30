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
int timMaxMin(int a[][MAXCOT],int m,int n,int &min)
{
	int max=a[0][0];
	 min=a[0][0];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(max<a[i][j])
				max=a[i][j];
			else
				if(min>a[i][j])
				min=a[i][j];
	return max;
}
void main()
{
	int n,m;
	int a[MAXDONG][MAXCOT];
	nhapMT(a,m,n);
	printf("\nMa tran:\n");
	xuatMT(a,m,n);
	int min;
	int kq=timMaxMin(a,m,n,min);
	printf("Max trong ma tran la %d\nMin trong ma tran la %d",kq,min);
	getch();
}