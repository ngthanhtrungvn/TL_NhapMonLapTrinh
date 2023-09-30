#include<conio.h>
#include<stdio.h>
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
		printf("Nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
int timMaxMin(int a[],int n,int &min)
{
 int max;
 for(int i=0;i<n;i++)
 {
 if(a[i]<0)
  {
   max=a[i];
   for(int j=0;j<n;j++)
     if(a[j]>max && a[j]<0) 
   max=a[j];
 }
 else
	{ min=a[i];
 for(int t=0;t<n;t++)
	 if(a[t]<min&&a[t]>0)
		 min=a[t];}
 }
 return max;
}
void main()
{
	int mang[MAX];
	int n;
	nhapMang(mang,n);
	printf("Cac phan tu co trong mang la: ");
	xuatMang(mang,n);
	int min;
	int kq=timMaxMin(mang,n,min);
	printf("\nSo am lon nhat la %d",kq);
	/*int kq1=timMin(mang,n);*/
	printf("\nSo duong nho nhat la %d",min);
	getch();
}