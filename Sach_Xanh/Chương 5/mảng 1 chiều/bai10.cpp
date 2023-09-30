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
int timMax(int a[],int n)  //co su dung thay doi bien nen phai su dung int
{
	int max=a[0]; //gan max=a[0]  
	for(int i=0;i<n;i++)  // xet tu tu tang dan
		if(max<a[i])  //neu max<a[i] 
	max=a[i];		//max=a[i]
	return max;
}
void main()
{
	int mang[MAX];
	int n;
	nhapMang(mang,n);
	printf("Cac phan tu trong mang la: ");
	xuatMang(mang,n);
	int kq=timMax(mang,n);
	printf("\nPhan tu lon nhat trong mang la %d",kq);
	getch();
}