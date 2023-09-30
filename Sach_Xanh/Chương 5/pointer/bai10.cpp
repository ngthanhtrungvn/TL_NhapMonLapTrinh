#include<conio.h>
#include<stdio.h>
#include<math.h>
#define MAX 100
void nhapMang(int *a,int &n)
{
	do
	{
		printf("Nhap so luong phan tu vao:");
		scanf("%d",&n);
	} while (n<=0||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
		scanf("%d",(a+i));
	}
}
void xuatMang(int *a,int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",*(a+i));
}
int kTraSNT(int n)
{
	if(n<2)
		return 0;
	else
		for(int i=2;i<=sqrt((float)n);i++)
			if(n%i==0)
				return 0;
	return 1;
}
int dem(int *a,int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(kTraSNT(*(a+i))==1)
			dem++;
	return dem;
}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	printf("\nCo %d so nguyen to trong mang",dem(a,n));
	getch();
}