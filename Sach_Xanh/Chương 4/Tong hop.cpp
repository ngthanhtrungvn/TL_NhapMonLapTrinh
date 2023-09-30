#include<conio.h>
#include<math.h>
#include<stdio.h>
int kiemTraChanLe(int x);
int kiemTraSNT(int x);
int kiemTraSoCP(int x);
int kiemTraSoHH(int x);
int xuatNSNTDauTien(int n);
int xuatNSoChinhPhuong(int n);
int demUoc(int x);
void xuatRaTuanNgayLe(int n);
int xuatRa3ChuSo(int n);
int tongBangTich(int n);
int timNLonNhat(int M);
void docSo(int n);
void doiGiay(int T);
int timNguyenToCugNhau(int a,int b);
void timSo(int N);
void tong(int a,int b,int c,int d,int e,int f,char ch);
void tich(int a,int b,int c,int d,int e,int f,char ch);
void so(int x);
 void main()
{int chon;
	do {
printf("\n============================================================================================================");
	printf("\n1. BAI 1\n");
	printf("2. BAI 2\n");
	printf("3. BAI 3\n");
	printf("4. BAI 4\n");
	printf("5. BAI 5\n");
	printf("6. BAI 6\n");
	printf("7. BAI 7\n");
	printf("8. BAI 8\n");
	printf("9. BAI 9\n");
	printf("10.BAI 10\n");
	printf("11.BAI 11\n");
	printf("12.BAI 12\n");
	printf("13.BAI 13\n");
	printf("14.BAI 14\n");
	printf("15.BAI 15\n");
	printf("16.BAI 16\n");
	printf("17.BAI 17\n");
	printf("0. Thoat\n");
printf("============================================================================================================");
printf("\nLua chon cua ban la:");
	scanf("%d",&chon);
		switch(chon)
		{
			case 0:printf("Thoat chuong trinh");
			break;
			case 12:
					{
						int a,b,c,d,e,f;
						char ch;
						do{
						printf("\nNhap vao a/b :");scanf("%d%c%d",&a,&ch,&b);
						printf("Nhap vao c/d :");scanf("%d%c%d",&c,&ch,&d);
						printf("Nhap vao e/f :");scanf("%d%c%d",&e,&ch,&f);
						}while(b==0||d==0||f==0);
						tong(a,b,c,d,e,f,ch);
						tich(a,b,c,d,e,f,ch);
						break;}
			case 1:
			{int a;
				printf("Nhap so nguyen a: ");
				scanf("%d",&a);
				int kq=kiemTraChanLe(a);
				if(kq==1)
				printf("%d la so chan\n",a);
				else
				printf("%d la so le\n",a);
				break;
			}
			case 2:
			{int a;
				printf("Nhap so nguyen a: ");
				scanf("%d",&a);
				int kq=kiemTraSNT(a);
					if(kq==1)
				printf("%d la so nguyen to\n",a);
				else
					printf("%d khong la so nguyen to\n",a);	
			break;}
			case 3:
			{int a;
				printf("Nhap so nguyen a:");
				scanf("%d",&a);
				int kq=kiemTraSoCP(a);
				if(kq==1)
				printf("%d la so chinh phuong\n",a);
				else
					printf("%d khong la so chinh phuong\n",a);	
				break;
			}
			case 4:
			{
				int a;
				printf("Nhap so nguyen a:");
				scanf("%d",&a);
				int kq=kiemTraSoHH(a);
				if(kq==1)
				printf("%d la so hoan hao\n",a);
				else
					printf("%d khong la so hoan hao\n",a);
			break;}
			case 5:
			{
				int a,dem=0,i=2;
				printf("Nhap so nguyen a:");
				scanf("%d",&a);
				while(dem<a)
				{
					if( xuatNSNTDauTien(i))
					{printf("%10d",i);
					dem++;}
				i++;}
			break;}
			case 6:
			{
				int i=1,dem=0,a;
	printf("Nhap a vao:");
	scanf("%d",&a);
	while(dem<a)
	{
		if(xuatNSoChinhPhuong(i))
		{printf("%d ",i);
			dem++;
		}
		i++;
	}
			break;}
			case 7:
			{
				int a;
				printf("Nhap so nguyen a:");
				scanf("%d",&a);
				int kq=demUoc(a);
				printf("%d\n",kq);
			break;
			}
			case 10:
				{int a;
					do{
						printf("Nhap a>0.Neu a<=0.Nhap lai:\n");
				printf("Nhap so nguyen a:");
				scanf("%d",&a);}
					while(a<=0);
		      xuatRaTuanNgayLe(a);
				break;
				}
			case 14:
				{
					int i=100;
				while(i<1000)
				{int kq=xuatRa3ChuSo(i);
				if(kq==1)
				printf("%d ",i);
				i++;}
				break;}
			case 16:
				{
					int i=0;
					while(i<1000)
					{
						int kq=tongBangTich(i);
							if(kq==1)
								printf("%d ",i);
						i++;}
				break;}
			case 9:
				{
					int M;
					printf("Nhap M vao:");
					scanf("%d",&M);
					int kq=timNLonNhat(M);
						printf("n lon nhat la %d",kq);
			break;	}
			case 8:
				{
					int N;
					do
					{printf("(Nhap 0<N<1000.Neu khong dung.Hay nhap Lai!)\n");
						printf("Nhap vao so N:");
					scanf("%d",&N);}
						
					while(N<=0||N>=1000);
					docSo(N);
					break;
				}
				case 11:
				{
					int T;
					printf("Nhap T giay vao:");
					scanf("%d",&T);
					doiGiay(T);
					break;
				}
				case 17:
				{
					int N;
					printf("Nhap vao so N:");
					scanf("%d",&N);
					 timSo(N);
				break;}
				case 13:
				{
					int m,n;
					printf("Nhap m n vao:");
					scanf("%d%d",&m,&n);
					int kq=timNguyenToCugNhau(m,n);
					if(kq==1)
					printf("Hai so nguyen to cung nhau");
					else
					printf("Khong phai hai so nguyen to cung nhau");
					break;
				}
				case 15:
					{
						for(int i=10000;i<100000;i++)
							so(i);
					}break;
			default:printf("Nhap lai!\n");
		}
}
while(chon!=0);
getch();
}
int kiemTraChanLe(int x)
{
	if(x%2==0)
	return 1;
	return 0;
}
int kiemTraSNT(int x)
{int dem=0;
	for(int i=1;i<=x;i++)
	if(x%i==0)
dem++;
	if(dem==2)
	return 1;
	return 0; 
}
int kiemTraSoCP(int x)
{
	float can=sqrt((float)x);
	int so=(int)can;
	if(so*so==x)
	return 1;
	return 0;
}
int kiemTraSoHH(int x)
{
	int s=0;
	for(int i=1;i<x;i++)
	if(x%i==0)
s+=i;
	if(s==x)
	return 1;
	return 0; 
}
int xuatNSNTDauTien(int n)
{
	for(int i=2;i<=sqrt((float)n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
int xuatNSoChinhPhuong(int n)
{
	float can=sqrt((float)n);
	int so=(int)can;
	if(so*so==n)
	return 1;
	return 0;
}
int demUoc(int x)
{int dem=0;
	for(int i=1;i<=x;i++)
	if(x%i==0)
	dem++;
return dem;
}
void xuatRaTuanNgayLe(int n)
{int x,y;
x=n/7;y=n%7;
printf(" %d tuan va %d ngay le ",x,y);
}
int xuatRa3ChuSo(int n)
{
		int b,c;
		int a=n;
		b=a%10;
		a=a/10;
		c=a%10;
		a=a/10;
		if(a!=b && a!=c && c!=b)
		return 1;
		return 0;	
	}              
int tongBangTich(int n)
{	int tg=0,t=1,a,N=n,M=n;
		while(N>0)
		{
			a=N%10;
			tg=tg+a;
			N=N/10;
		}
		while(M>0)
		{
			a=M%10;
			t=t*a;
			M=M/10;
		}
		if(tg==t||n==0)
			return 1;
		else
			return 0;
}
int timNLonNhat(int M)
{
	int n=0,s=0;
	do
	{
		n=n+1;
		s+=n;
	}while(s+n+1<M);
	return n;
}
void docSo(int n)
{
	int dv=n%10;
	n=n/10;
	int chuc=n%10;
	int tram=n/10;
	
	switch(tram)
	{
	case 1:printf("mot tram ");break;
	case 2:printf("hai tram ");break;
	case 3:printf("ba tram ");break;
	case 4:printf("bon tram ");break;
	case 5:printf("nam tram ");break;
	case 6:printf("sau tram ");break;
	case 7:printf("bay tram ");break;
	case 8:printf("tam tram ");break;
	case 9:printf("chin tram ");break;
	}
	switch(chuc)
	{
	case 1:printf("muoi ");break;
	case 2:printf("hai muoi ");break;
	case 3:printf("ba muoi ");break;
	case 4:printf("bon muoi ");break;
	case 5:printf("nam muoi ");break;
	case 6:printf("sau muoi ");break;
	case 7:printf("bay muoi ");break;
	case 8:printf("tam muoi ");break;
	case 9:printf("chin muoi ");break;
	}
	switch(dv)
	{
	case 1:printf("mot ");break;
	case 2:printf("hai ");break;
	case 3:printf("ba ");break;
	case 4:printf("bon ");break;
	case 5:printf("nam ");break;
	case 6:printf("sau ");break;
	case 7:printf("bay ");break;
	case 8:printf("tam ");break;
	case 9:printf("chin ");break;
	}
	
}
void doiGiay(int T)
{
	int h,m,s;
	h=T/3600;
	m=(T%3600)/60;
	s=T-h*3600-m*60;
	printf("%dh:%dm:%ds",h,m,s);
}
void timSo(int N)
{
	int dau,dem=0,s=0,max=0,X=N,x=N;
	bool dm=true;
	while(N>0)
	{
		dau=N%10;
		dem++;
		s+=dau;
		N=N/10;
		if(max<dau)
		max=dau;
		while(X>0)
		{
			int a=X%10;
			while(x>0)
			{
				x=x/10;
				int b=x%10;
				if(a==b)
				dm=false;
			}break;
			/*if(dm)
			break;//X=X/10;
			else
			break;//X=X/10;*/
		}
	}
	printf("So dau tien la %d\n",dau);
	printf("Tong cac chu so la %d\n",s);
	printf("So lon nhat trong cac chu so la %d\n",max);
	printf("Co tat ca %d chu so\n",dem);
	if(dm)
	printf ("So khac nhau doi mot");
	else
	printf ("So khong khac nhau doi mot");
}
int timNguyenToCugNhau(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		a=a-b;
	if(a<b)
		b=b-a;
	}
	if(a==1)
	return 1;
	return 0;
}
void tong(int a,int b,int c,int d,int e,int f,char ch)
{
	int x=f*(a*d+c*b)+e*b*d,q=x;
	int y=b*d*f,w=y;
	while(x!=y)
	{if(x>y)
		x=x-y;
	 else
		y=y-x;
	}
	q=q/x;
	w=w/x;
	printf("Tong=%d%c%d\n",q,ch,w);
}
void tich(int a,int b,int c,int d,int e,int f,char ch)
{
	int x=a*c*e,q=x;
	int y=b*d*f,w=y;
	while(x!=y)
	{if(x>y)
		x=x-y;
	 else
		y=y-x;
	}
	q=q/x;
	w=w/x;
	printf("Tich=%d%c%d",q,ch,w);
}
void so(int x)
{
	int a=x,b,c,d,e;
	e=a%10;a=a/10;d=a%10;a=a/10;c=a%10;a=a/10;b=a%10;a=a/10;
	if(e==d&&e!=c&&e!=b&&e!=a&&a!=b&&a!=c&&b!=c)
		printf("%d ",x);
	else	
		if(e!=d&&e==c&&e!=b&&e!=a&&a!=b&&a!=d&&b!=d)
			printf("%d ",x);
		else
			if(e!=d&&e!=c&&e==b&&e!=a&&a!=d&&a!=c&&d!=c)
				printf("%d ",x);
			else
				if(e!=d&&e!=c&&e!=b&&e==a&&b!=c&&b!=d&&d!=c)
					printf("%d ",x);		
				else
					if(d!=e&&d!=c&&d!=b&&d==a&&b!=c&&b!=e&&e!=c)
						printf("%d ",x);
					else
						if(d!=e&&d!=c&&d==b&&d!=a&&a!=c&&a!=e&&c!=e)
							printf("%d ",x);
						else
							if(d!=e&&d==c&&d!=b&&d!=a&&a!=e&&a!=b&&e!=b)
								printf("%d ",x);
							else
								if(c!=e&&c!=d&&c==b&&c!=a&&a!=d&&a!=e&&e!=d)
									printf("%d ",x);
								else
									if(c!=e&&c!=d&&c!=b&&c==a&&b!=d&&b!=e&&e!=d)
										printf("%d ",x);
									else
										if(b!=e&&b!=d&&b!=c&&b==a&&c!=d&&c!=e&&d!=e)
											printf("%d ",x);
}
