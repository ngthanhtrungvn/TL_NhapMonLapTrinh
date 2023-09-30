#include<conio.h>
#include<stdio.h>
#define MAX 100


void nhap(int a[],int &n)
{
	do
	{
		printf("Nhap vao so luong phan tu:");
		scanf("%d",&n);
	}while(n<=0||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++)
			if(a[i]==a[j])
			{
				printf("Nhap lai!\n");
				i--;
			}
	}
}
void main()
{
	int a[MAX],n;
	nhap(a,n);
	getch();
}