#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAXCOT 50
#define MAXDONG 50
void nhapMT(int a[][MAXCOT],int &m,int &n)
{
	do
	{
		printf("Nhap vao so dong:");
		scanf("%d",&m);
	} while (m<=0||m>MAXCOT);
	do
	{
		printf("Nhap vao so cot:");
		scanf("%d",&n);
	} while (n<=0||n>MAXCOT);
	srand(time(NULL));
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			int r=rand()%11;
			printf("a[%d][%d]=%d\n",i,j,r);
			a[i][j]=r;
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
int tinhTich(int a[][MAXCOT],int m,int j)
{
	int p=1;
	for(int i=0;i<m;i++)
		p*=a[i][j];
	return p;
}
void timCotMin(int a[][MAXCOT],int m,int n)
{
	int min=tinhTich(a,m,0);
	for(int i=1;i<n;i++)
		if(min>tinhTich(a,m,i))
			min=tinhTich(a,m,i);
	for(int i=0;i<n;i++)
		if(tinhTich(a,m,i)==min)
			printf("Cot co tich nho nhat la %d\n",i);
}
void main()
{
	int a[MAXDONG][MAXCOT];
	int m,n;
	nhapMT(a,m,n);
	xuatMT(a,m,n);
	timCotMin(a,m,n);
	getch();
}