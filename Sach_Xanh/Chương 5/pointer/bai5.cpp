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
int timAmLN(int *a,int n)
{
	int vt=-1;
	for(int i=0;i<n;i++)
		if(*(a+i)<0)
		{
			vt=i;
			break;
		}
		if(vt==-1)
			return 0;
		int vtmax=vt;
		for(int i=vtmax+1;i<n;i++)
			if(*(a+vtmax)<*(a+i)&&*(a+i)<0)
				vtmax=i;
		return *(a+vtmax);
	/*int vtmax;int dem=0;
	for(int i=0;i<n;i++)
		if(*(a+i)<0)
		{
			dem++;
			vtmax=i;
			for(int j=0;j<n;j++)
				if(*(a+j)<0&&*(a+j)>*(a+vtmax))
					vtmax=j;
		}
		if(dem==0)
			return 0;
		return *(a+vtmax);*/
}
int timDuongNN(int *a,int n)
{
	/*int vt=-1;
	for(int i=0;i<n;i++)
		if(*(a+i)>0)
		{
			vt=i;
			break;
		}
		if(vt==-1)
			return 0;
		int vtmax=vt;
		for(int i=vtmax+1;i<n;i++)
			if(*(a+vtmax)>*(a+i)&&*(a+i)>0)
				vtmax=i;
		return *(a+vtmax);*/
	

}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	if(timAmLN(a,n)==0)
		printf("\nKhong co so am trong mang");
	else
	printf("\nSo am lon nhat trong mang la:%d",timAmLN(a,n));
	
	if(timDuongNN(a,n)==0)
		printf("\nKhong co so duong trong mang");
	else
	printf("\nSo duong nho nhat trong mang la:%d",timDuongNN(a,n));
	getch();
}