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
int demCD(int a[][MAX],int m,int n)
{
    int dem=0;
    for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
        {
            if(i-1>= 0)
                if(a[i][j]<=a[i-1][j])
                    continue;
            if(i+1<m)
				if(a[i][j]<=a[i+1][j])
                    continue;
            if(j-1>=0)
                if(a[i][j]<=a[i][j-1])
                    continue;
            if(j+1<n)
                if (a[i][j]<=a[i][j+1])
                    continue;
            dem++;
        }
	return dem;
}
void main()

{
	int m,n;
	int a[MAX][MAX];
	nhapMT(a,m,n);
	printf("\nCac phan tu trong mang la:\n");
	xuatMT(a,m,n);
	printf("\nCo %d phan tu cu dai trong mang",demCD(a,m,n));
	getch();
}