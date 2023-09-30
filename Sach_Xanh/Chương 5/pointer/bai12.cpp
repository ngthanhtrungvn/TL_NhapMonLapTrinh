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
int timSNTMax(int *a,int n)
{
	int vt=-1;
	for(int i=0;i<n;i++)
		if(kTraSNT(*(a+i))==1)
		{
			vt=i;
			break;
		}
		if(vt==-1)
			return 0;
		int vtmax=vt;
		for(int i=vt+1;i<n;i++)
			if(*(a+vtmax)<*(a+i)&&kTraSNT(*(a+i))==1)
				vtmax=i;
		return *(a+vtmax);
}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	if(timSNTMax(a,n)==0)
		printf("\nKhong co so nguyen to trong mang");
	else
		printf("\nSo nguyen to lon nhat trong mang la %d",timSNTMax(a,n));
	getch();
}