#include<stdio.h>
#include<conio.h>
#define MAX 100
void nhapMang(int a[],int &n)
{	do
	{
		printf("Nhap so luong phan tu trong mang vao: ");
		scanf("%d",&n);
	}
	while(n<0||n>MAX);
	for(int i=0;i<n;i++)
	{
	printf("Nhap a[%d]= ",i);
	scanf("%d",&a[i]);
	}
}
void main()
{
	int mang[MAX];  //cai nay khai bao de hieu tren ham nhap mang co ghi
	int n;
	nhapMang(mang,n);// phai khai bao (mang,n) vi khai bao (n,mang) may se ko hieu vi ham nhap la mang trc n sau 
	getch();
}