#include<stdio.h>
#include<conio.h>
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
			
			for(int j=0;j<i;j++)
				if(a[j]==a[i])
				{
					printf("Nhap lai!\n");
					--i;
				}	
				
		}
	
}
void xuatMang(int a[],int n)
{
	
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}

	void main()
	{
		int mang[MAX];
		int n;
		nhapMang(mang,n);
		printf("Cac phan tu trong mang la:");
		xuatMang(mang,n);
		getch();
	}