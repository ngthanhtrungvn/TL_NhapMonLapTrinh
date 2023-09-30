#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhap(int a[],int &n);
float tinhTb(int a[],int n,float &tongAm);
void main()
{
	int a[MAX],n;
	nhap(a,n);
	float tongAm;
	float kq=tinhTb(a,n,tongAm);
	printf("Trung binh tong duong:%.2f",kq);
	printf("Trung binh tong am:%.2f",tongAm);	
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
float tinhTb(int a[],int n,float &tongAm)
{
	int s=0;
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i]>0)
		{
			dem++;
			s+=a[i];
		}
	int s1=0;
	int dem1=0;
	for(int i=0;i<n;i++)
		if(a[i]<0)
		{
			dem1++;
			s1+=a[i];
		}
		tongAm=(float)s1/dem1;
		return (float)s/dem; 
}