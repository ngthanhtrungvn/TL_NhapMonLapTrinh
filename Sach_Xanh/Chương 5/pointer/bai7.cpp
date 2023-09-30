#include<conio.h>
#include<stdio.h>
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
int timVt(int *a,int n,int x)
{
	for(int i=0;i<n;i++)
	
		if(*(a+i)==x)
			{return i;
			break;}
	return -1;
}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	int x;
	printf("\nNhap gia tri x vao:");
	scanf("%d",&x);
	if(timVt(a,n,x)==-1)
		printf("%d khong co trong mang",x);
	else
		printf("%d co vi tri dau tien trong mang la %d",x,timVt(a,n,x));
	getch();
}