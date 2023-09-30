#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
	printf("Nhap so luong phan tu trong mang vao:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	printf("%5d",a[i]);
}
int tinhTong(int a[],int n,int &s1)
{
	int s=0;s1=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)  //khac nhau
			s+=a[i];
		else
			s1+=a[i];
	}
	return s;
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	int s1;
	int kq=tinhTong(mang,n,s1);
	printf("\nTong cac phan tu chan trong mang la:%d",kq);
	printf("\nTong cac phan tu le trong mang la:%d",s1);
	getch();
}