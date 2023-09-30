#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhap(int a[],int &n);
float tinhTbTich(int a[],int n,float &tichLe);
void main()
{
	int a[MAX],n;
	nhap(a,n);
	float tichLe;
	float kq=tinhTbTich(a,n,tichLe);
	printf("Trung binh tich chan:%.2f",kq);
	printf("Trung binh tich le:%.2f",tichLe);	
	getch();
}
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
	}
}
float tinhTbTich(int a[],int n,float &tichLe)
{
	int s=1;
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i]%2==0)
		{
			dem++;
			s*=a[i];
		}
	int s1=1;
	int dem1=0;
	for(int i=0;i<n;i++)
		if(a[i]%2!=0)
		{
			dem1++;
			s1*=a[i];
		}
		tichLe=(float)s1/dem1;
		return (float)s/dem; 
}