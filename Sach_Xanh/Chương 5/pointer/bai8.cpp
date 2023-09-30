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
void xoa(int *a,int &n,int k)
{
	if(k<0||k>=n)
		return ;
	for(int i=k;i<n-1;i++)
		*(a+i)=*(a+i+1);
	n--;
}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	int i;
	printf("\nBan muon xoa phan tu vi tri nao:");
	scanf("%d",&i);
	xoa(a,n,i);
	printf("Mang vua xoa la:");
	xuatMang(a,n);
	getch();
}