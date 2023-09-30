#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int chon;
	do
	{
	printf("\t\t\tMENU\n");
	printf("Bai 1\n");
	printf("Bai 2\n");
	printf("Bai 3\n");
	printf("Bai 4\n");
	printf("Bai 5\n");
	printf("Bai 6\n");
	printf("Bai 7\n");
	printf("Bai 8\n");
	printf("Bai 9\n");
	printf("Bai 10\n");
	printf("Bai 11\n");
	printf("Bai 0\n");
	printf("nhap bai ban muon chon: ");
	scanf("%d",&chon);
	switch(chon)
	{
	case 1:
		{
				int a,b;
		printf("nhap 2 so nguyen: ");
		scanf("%d%d",&a,&b);
			int tong = a+b;
			int hieu = a-b;
			int tich = a*b;
			float thuong = (float)a/(float)b;
		printf("\ntong = %d\n", tong);
		printf("hieu = %d\n", hieu);
		printf("tich = %d\n", tich);
		printf("thuong = %0.2f\n\n\n", thuong);
		break;
		}
	case 2:
		{
			float C, F=1;
				printf("Nhap do F: ");
			scanf("%f",&F);
			C= (float)(5*F)/9;
			printf("\nket qua chuyen doi : %0.1f \n\n\n",C);
			break;
		}
	case 3:
		{
			int x;
				printf("nhap x vao:");
				scanf("%d",&x);
				int Fx=5*x*x+6*x+1;
				int Gx=2*powl(x,4)+4*x+1-5*x*x;
				printf("\ngia tri Fx la %d\ngia tri Gx la %d\n\n\n",Fx,Gx);
				break;
		}
	case 4:
		{
			int x;
    printf("Nhap vao so nguyen x:");
	scanf("%d",&x);
		float Fx=(1+x)/(float)(1-x);
		float Gx=(float)(1+5*x-7*x*x)/(3*powl(x,3)+2);
		if(x!=1)
	printf("\ngia tri F bang %.2f\ngia tri G bang %.2f\n\n\n",Fx,Gx);
	else
	if((3*powl(x,3)+2)==0)
	printf("\nkhong xay ra\n\n\n");
	else
		printf("\nfx khong xay ra gia tri gx=%.2f\n\n\n",Gx);
		break;
		}
	case 5:
		{
				int a,b,c;
	printf("Nhap vao 3 so nguyen a b c :");
	scanf("%d%d%d",&a,&b,&c);
		float  Fx=(-b+sqrtf(b*b-4*a*c))/(2*a);
		float  Gx=(-b-sqrtf(b*b-4*a*c))/(2*a);
	if(b*b-4*a*c>=0 && a!=0)
	printf("\ngia tri Fx bang %.2f\ngia tri Gx bang %.2f\n\n\n",Fx,Gx);
	else
	printf("\nkhong xay ra\n\n\n");
	break;
		}
	case 6:
		{
				float x;
			printf("nhap vao so thuc x:");
			scanf("%f",&x);
				float fx=(3*x*x+4*x+5)/(2*x+1);
				float gx=(3*pow(x,4)+2*x+sqrtf(x+1))/(5*x*x-3);
			if((x+1)>=0 && x!=-0.5)
			printf("\ngia tri fx=%.2f\ngia tri gx=%.2f\n\n\n",fx,gx);
			else
			printf("\nkhong xay ra fx\ngia tri gx=%.2f\n\n\n",gx);
			break;
		}
	case 7:
		{
				int a=3,b=4, C, S;
	printf("nhap chieu dai: ");
	scanf("%d",&a);
	printf("nhap chieu rong: ");
	scanf("%d",&b);
	C=(a+b)*2;
	S= a*b;
	printf("chu vi hcn: %d\n",C);
	printf("dien tich hcn: %d\n\n\n",S);
	break;
		}
	case 8:
		{
				float r=6, C, S,pi=3.14;
	printf("nhap ban kinh: ");
	scanf("%f",&r);
	C=2*pi*r;
	S= pi*r*r;
	printf("\nchu vi hinh tron : %0.1f\n",C);
	printf("dien tich hinh tron : %0.1f\n\n\n",S);
	break;
		}
	case 9:
		{
				int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	float dc = (float)a*sqrtf(2);
	printf("\nchu vi hinh vuong: %d \n",a*4);
	printf("dien tich hinh vuong: %d \n",a*a);
	printf("duong cheo hinh vuong: %0.3f \n\n\n",dc);
	break;
		}
	case 10:
		{
				int max, a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	max=a;
	if(b>max)
	max=b;
	printf("\nSo lon nhat la: %d\n\n\n",max);
	break;
		}
	case 11:
		{
				int max,min, a,b,c;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
		max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
		min=a;
	if (b<min)
		min=b;
	if(c<min)
		min=c;
			printf("\nSo lon nhat la: %d",max);
			printf("\nso nho nhat la: %d\n\n\n",min);
			break;
		}
	default:printf("ban muon thoat chuong trinh");

	}
	}
	while(chon!=0);
	getch();
	
}