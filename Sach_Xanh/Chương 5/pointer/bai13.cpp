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
void dem(int *a,int n,int *b)
{
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
			if(*(a+i)==*(a+j))
				*(b+i)=*(b+i)+1;
}
void soLanXuatHienNN(int *a,int n,int *b)
{
	int max=1;
	for(int i=0;i<n;i++)
		if(max<*(b+i))
			max=*(b+i);
	for(int i=0;i<n;i++)
		if(*(b+i)==max)
			printf("\nPhan tu %d voi so lan xuat hien nhieu nhat la %d\n",*(a+i),*(b+i));
}
void main()
{
	int a[MAX];
	int n;
	int b[MAX]={};
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	dem(a,n,b);
	soLanXuatHienNN(a,n,b);
	getch();
}