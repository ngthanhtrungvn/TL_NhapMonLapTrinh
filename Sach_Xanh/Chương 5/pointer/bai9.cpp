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
void themX(int *a,int n,int x,int k)
{
	if(k<0||k>=n) return ;
	for(int i=n;i>n;i--)
		*(a+i)=*(a+i-1);
	*(a+k)=x;
	n++;
}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	int i,x;
	printf("\nBan muon them phan tu nao:");
	scanf("%d",&x);
	printf("Ban muon them phan tu %d vao vi tri nao trong mang:",x);
	scanf("%d",&i);
	themX(a,n,x,i);
	printf("\nMang vua them la:");
	xuatMang(a,n);
	getch();
}