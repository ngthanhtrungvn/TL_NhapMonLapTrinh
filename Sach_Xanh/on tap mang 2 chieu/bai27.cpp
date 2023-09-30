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
void tinhTb(int a[][MAXCOT],int m,int n)
{
	int dem=0;
	int s=0;
	for(int i=1;i<m;i=i+2)
		for(int j=0;j<n;j++)
			if(a[i][j]%2==0)
			{
				s=s+a[i][j];
				dem++;
			}
			float kq=s/(float)dem;
			if(dem==0)
				printf("Khong co phan tu chan dong le");
			else
				printf("Trung binh cac phan tu chan thuoc dong le la %.2f",kq);

}
void main()
{
	int a[MAXDONG][MAXCOT];
	int m,n;
	nhapMT(a,m,n);
	xuatMT(a,m,n);
	tinhTb(a,m,n);
	getch();
}