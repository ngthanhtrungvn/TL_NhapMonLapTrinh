#include<conio.h>
#include<stdio.h>
#include<math.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
	do
	{
		printf("Nhap so luong phan tu trong mang vao:");
		scanf("%d",&n);
	}while(n<0||n>MAX);
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
void timMin(int a[],int n)
{
	int dem=0; 
	int e=a[0];
	int b=a[0];
	int min=pow(abs(a[0]),2.0);
		for(int i=0;i<n;i++)
			if(min>pow(abs(a[i]),2.0))
				b=a[i];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
				if(a[i]==-a[j])
					if(a[i]==-b)
				{dem++;e=-b;}
		}
		if(dem>0)
			printf("\nSo co binh nho nhat trong mang la:%d va %d",e,b);	
		else
			printf("\nSo co binh nho nhat trong mang la:%d",b);
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	timMin(mang,n);
	getch();
}