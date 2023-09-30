#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
		do
	{
		printf("Nhap so luong phan tu trong mang vao: ");
		scanf("%d",&n);
	}while(n<0||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
int tongSoChanHoacLe(int a[],int n,int &tongle)
{
	int s=0;tongle=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			s+=a[i];  //tinh tong so chan
		else
			tongle+=a[i];  // tinh tong so le
	}
	return s;
}
void main()
{
	int mang[MAX];
	int n;
	nhapMang(mang,n);
	printf("Cac phan tu trong mang la: ");
	xuatMang(mang,n);
	int tongle;
	int kq=tongSoChanHoacLe(mang,n,tongle);
	printf("\nTong cac so chan co trong mang la: %d",kq);
	printf("\nTong cac so le co trong mang la: %d",tongle);
	getch();
}