
#include<stdio.h>
#include<conio.h>
#include<math.h>
  void main()
{
	int chon;
	do 
	{
printf("\t\tMENU\n");
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
	printf("18.BAI 18\n");
	printf("19.BAI 19\n");
	printf("20.BAI 20\n");
	printf("21.BAI 21\n");
	printf("22.BAI 22\n");
	printf("23.BAI 23\n");
	printf("24.BAI 24\n");
	printf("25.BAI 25\n");
	printf("26.BAI 26\n");
	printf("27.BAI 27\n");
	printf("28.BAI 28\n");
	printf("29.BAI 29\n");
	printf("30.BAI 30\n");
	printf("31.BAI 31\n");
	printf("32.BAI 32\n");
	printf("33.BAI 33\n");
	printf("34.BAI 34\n");
	printf("35.BAI 35\n");
	printf("0. Thoat\n");

printf("\nLua chon cua ban la: ");
	scanf("%d",&chon);
		switch(chon)
	{
	case 1:
		{
		int a;
	printf("Nhap vao so nguyen: ");
	scanf("%d",&a);
	if(a>0)
		printf("%d la so duong\n\n",a);
	else
	if(a==0)
		printf("%d la so khong am khong duong\n\n",a);
	else 
		printf("%d la so am\n\n",a);
	break;
		}
		   case 0:
		printf("Thoat khoi chuong trinh");
		break;
		case 2:
		{
			int a,b;
			printf("Nhap vao 2 so nguyen: ");
			scanf("%d%d",&a,&b);			
			int max=a;
			if(max<b)
			max=b;
			printf("GTLN la %d\n\n",max);
			break;
		}
		case 3:
		{
			int a;
	printf("Nhap vao so nguyen: ");
	scanf("%d",&a);
	if(a%2==1)
	printf("%d la so le\n\n",a);
	else
	printf("%d la so chan\n\n",a);
		break;
		}
		case 4:
		{
				int a,b;
	printf("Nhap vao 2 so nguyen: ");
	scanf("%d%d",&a,&b);
	if(a>b)
	
		printf("%d lon hon %d\n\n",a,b);
		else
	if(a==b)
		printf("%d bang %d\n\n",a,b);
	
	else
	printf("%d nho hon %d\n\n",a,b);
		break;
		}
		case 5:
		{
			int a,b;
	printf("Nhap vao 2 so nguyen: ");
	scanf("%d%d",&a,&b);
	if(a%b==0)
	printf("%d la boi cua %d\n\n",a,b);
	else
	printf("%d khong la boi cua %d\n\n",a,b);
		break;
		}
		case 6:
		{
				int dg,sl;
	printf("Nhap vao don gia va so luong: ");
	scanf("%d%d",&dg,&sl);
	float gg=0;
    int tt=dg*sl;
    if(tt>100)
   { 
	   gg=0.03*tt;
    float tong=tt-gg;
    printf("Tien phai tra la %d\n\n",tt);
	}
    	else
    	printf("Tien phai tra la %d\n\n",tt);
		break;
		}
		case 7:
		{
			printf("Phuong trinh bac 1 co dang la a*x+b=0\n");
	         int a,b;
	         float x;
	      printf("Nhap a,b vao: ");
	      scanf("%d%d",&a,&b);
	    if(a==0)
	  {
	  	if(b==0)
		printf("phuong trinh vo so nghiem\n\n");
		else
		printf("phuong trinh vo nghiem\n\n");
		}
	else
	{	x=-b/(float)a;
		printf("phuong trinh co nghiem %.2f\n\n",x);
	}
		break;
		}
		case 8:
		{
			printf("Phuong trinh bac 2 co dang ax^2+bx+c=0\n");
		int a,b,c;
		do
	{
		printf("Nhap a vao: ");
	scanf("%d",&a);
	}	
	while(a==0);
	printf("Nhap vao b,c: ");
	scanf("%d%d",&b,&c);
	float denta=b*b-4*a*c;
	float can=sqrt((float)denta);
	if(denta>0)
		printf("Phuong trinh co hai nghiem phan biet: %.2f va %.2f\n\n",(-b+can)/(2*a),(-b-can)/(2*a));
	else
		if(denta==0)
			printf("phuong trinh co nghiem kep:%.2f\n\n",-b/(2.0*a));
		else
			printf("Phuong trinh vo nghiem\n\n");
			break;
		}
		case 9:
		{
			int thang;
   	printf("Nhap thang vao: ");
   	scanf("%d",&thang);
   	switch(thang)
   	{
   		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
   		printf("thang %d co 31 ngay\n\n",thang);
		break;

		case 4:
		case 6:
		case 9:
		case 11:
   		printf("thang %d co 30 ngay\n\n",thang);
		break;

   	    case 2:
   		printf("thang %d co 28 hoac 29 ngay\n\n",thang);
		break;
   		default:printf("nhap lai!\n");
   	}
		break;
		}
		case 10:
		{
				int nam;
	printf("Nhap vao nam: ");
	scanf("%d",&nam);
	if(nam%400==0||nam%4==0 &&nam/100)
	   printf("%d la nam nhuan\n\n",nam);
	else
	printf("%d khong la nam nhuan\n\n",nam);
		break;
			}
			case 11:
			{
				printf("1.Hinhchunhat\n2.Hinhvuong\n3.Hinhtron");
	  int so;
	  printf("\nChon hinh can tinh: ");
	  scanf("%d",&so);
	  switch(so)
	  {
	  case 1:
		  {
			  int D,R,CV,DT;
			  printf("Nhap D,R:");
			  scanf("%d%d",&D,&R);
			  CV=(D+R)*2;
			  DT=D*R;
			  printf("Chu vi là %d\nDien tich la %d\n\n",CV,DT);
			  break;
		  }
	  case 2:
		  {
			  int canh,CV,DT;
			  printf("Nhap canh: ");
			  scanf("%d",&canh);
			  CV=canh*4;
			  DT=canh*canh;
			  printf("Chu vi la %d\nDien tich la %d\n\n",CV,DT);
			  break;
		  }
	  case 3:
		  {
			  const float PI=3.14;
			  float CV,DT;
			  int r;
			  printf("Nhap r: ");
			  scanf("%d",&r);
			  CV=2*PI*r;
			  DT=PI*r*r;
			  printf("Chu vi la %0.2f\nDien tich la %0.2f\n\n",CV,DT);
			  break;}
	  default : printf("Nhap lai!\n");
	  }
	  break;
			}
			case 12:
			{
				int a,b,so;
	printf("nhap vao hai so: ");
scanf("%d%d",&a,&b);
printf("1.cong\n2.tru\n3.nhan\n4.chia\n");
printf("nhap vao phep tinh: ");
scanf("%d",&so);
switch(so)
{ 
case 1:
	{
		int cong;
	cong=a+b;
	printf("ket qua la %d\n",cong);
	break;
	}
case 2:
	{
		int tru;
	tru=a-b;
	printf("ket qua la %d\n\n",tru);
	break;
	}
case 3:
	{
		int nhan;
	nhan=a*b;
	printf("ket qua la %d\n\n",nhan);
	break;
	}
case 4:
	{
		float chia;
	chia=(float)a/b;
	printf("ket qua la %.2f\n\n",chia);
	break;
	default:printf("nhap lai!\n");
    }
}break;
			}
			case 13:
			{
				int n,i;
				printf("nhap n vao: ");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				printf("%d ",i);
				printf("\n");
				break;
			}
			case 14:
			{
				int i,n,S;
	printf("nhap vao n: ");
	scanf("%d",&n);
	S=0;
	for(i=1;i<=n;i++)
	S=S+i;
	printf("gia tri cua s la: %d\n\n",S);
				break;
			}
			case 15:
			{
			int i,n,P;
				printf("nhap vao n: ");
				scanf("%d",&n);
				P=1;
				for(i=1;i<=n;i++)
				P*=i;
				printf("ket qua la %d\n\n",P);
			break;
			}
			case 16:
			{
				int S,n,i;
	printf("nhap n vao: ");
	scanf("%d",&n);
	S=0;
	for(i=1;i<=n;i++)
	S+=2*i;
	printf("ket qua la %d\n\n",S);
			break;
			}
			case 17:
			{
				int n,i,s;
	printf("nhap n vao: ");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	s+=i*i+i;
	printf("ket qua la %d\n\n",s);
			break;
			}
			case 18:
			{
				int n,i;
	printf("nhap n vao: ");
	scanf("%d",&n);
	float s;
	s=0;
	for(i=1;i<=n;i++)
	s+=1.0/(i*(i+1)*(i+2));
	printf("ket qua la %.2f\n\n",s);
			break;
			}
			case 19:
			{
				int n,s,i;
	printf("nhap n vao: ");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	s+=i*i;
	printf("ket qua la %d\n\n",s);
			break;
			}
			case 20:
			{
				int n,i,p,s;
	printf("nhap n vao: ");
	scanf("%d",&n);
	p=0;s=0;
	for(i=1;i<=n;i++)
	{
	p+=i;
	s=p+s;
	}
	printf("ket qua %d\n\n",s);
			break;
			}
			case 21:
			{printf("\t\t\t\t\t--------BANG CUU CHUONG --------\n");
				 
    for(int i=1;i<=9;i++)
    
		{ 
        for(int j=1; j<=10; j++)
		
            printf("%d x %d=%2d    ", j, i, i*j);
			printf("\n");
		}
			break;}
			case 22:
			{
				int n;
	printf("Nhap n vao: ");
	scanf("%d",&n);
	for(int i=n;i>=n;i--)
	{
		printf("\n              ----------BANG NHAN %d----------\n",i);
	
		for(int j=1;j<=9;j++)
		
			printf("\t\t\t%d*%d=%d\n",i,j,i*j);}
			
			break;
			}
			case 23:
			{
				int r,d;
	printf("Nhap d r vao: ");
	scanf("%d%d",&d,&r);
	 
	
	for(int i=1;i<=r;i++)
	{

		for(int j=1;j<=d;j++)
	
		printf(" * ");	
		printf("\n");
	}
			break;
			}
			case 24:
			{
					int n;
	printf("Nhap n vao: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
		if(i%2==1)
		printf(" %d ",i);
				printf("\n");
			break;
			}
			case 25:
			{
				int n;
	printf("Nhap n vao: ");
	scanf("%d",&n);
	int s=0;
		for(int i=1;i<n;i++)
		if(i%2==0)
		s+=i;
		printf("kq la %d\n\n",s);
			break;
			}
			case 26:
			{
					int n;
	printf("Nhap n vao: ");
	scanf("%d",&n);
	int s=0;
		for(int i=0;i<n;i++)
	if(i%5==0)
	printf(" %d ",i);
				printf("\n");
			break;}
			case 27:
			{
				int y,x;
    
	printf("Nhap x,y vao: ");
	scanf("%d%d",&x,&y);
	int m=x*y;
	while(x!=y)
	{
		if(x>y)
		x=x-y;
		else
		y=y-x;
		}
			printf("UCLN la %d",x);
			printf("\nBCNN la %d\n", m/x);
			break;}
			case 29:
			{
				int so,a;
printf("Trong thang ban su dung bao nhieu KW:");
	scanf("%d",&so);
	if(so<=100)
	a=so*5;
		if(so>=101 && so<=150)
	a=5*100+(so-100)*7;
		if(so>=151 && so<=200)
   a=100*5+50*7+(so-150)*10;  
		if(so>=201 && so<=300)
  a=100*5+50*7+50*10+(so-200)*15;
		if(so>300)
  a=100*5+50*7+50*10+100*15+(so-300)*20;
 printf("Tien dien phai tra la %d$\n",a);
				break;}
				case 30:
				{
					int n;
	printf("Nhap gia tri n vao:");
	scanf("%d",&n);
	if(n>5)
	{
		int m=n+2;
		printf("Gia tri n tang len 2 don vi la: %d",m);
		printf("\nGia tri luc dau n= %d\n",n);
	}
	else
	{const int a=0;
		printf("gia tri n= %d\n",a);}
				break;}
				case 31:
				{
					int n,m,i;
	printf("Nhap vao n,m:");
	scanf("%d%d",&n,&m);
	int dem=0;
	for( i=n;i<=m;i++)
		
		if(i%2==0)
    dem++;
	printf("co %d chan\n ",dem);
				break;}
				case 32:
				{
				int n,i;
	printf("Nhap vao so nguyen n:");
	scanf("%d",&n);
	int s=0;
i=1;
while(i<n)
	{	s+=i;	
		i++;
	}
	printf("kq la %d\n",s);
				break;}
				case 35:
{
	int a,b,c;
    printf("Nhap vao ba canh tam giac:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c&&(a+c)>b&&(c+b)>a)
	{
	printf("%d %d %d la ba canh cua tam giac\n",a,b,c);
	if(a==c&&c==b)
	printf("Tam giac deu\n");
	else
		if((a==b||a==c||b==c)&& (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a))
	printf("Tam giac vuong can\n");
		else
	if(a==b||a==c||b==c)
		printf("Tam giac can\n");
	else
	if(a*a+b*b==c*c||(a*a+c*c)==b*b||b*b+c*c==a*a)
	printf("Tam giac vuong\n");
	else
	printf("Tam giac thuong\n");
						}
						else
	printf("%d %d %d khong la ba canh cua tam giac\n",a,b,c);
				break;}
				case 28:
					{
						int gv,gr;
	do
	{
		printf("Nhap vao gio vao va gio ra:");
		scanf("%d%d",&gv,&gr);
		printf("**********************************\n");
	}
	while(gv<10||gr>24||gr<gv);
	if(gv<17&&gr<17)
		printf("Tien phai tra la %ddong\n",(gr-gv)*20000);
	else
	if(gv>17&&gr>17)
		printf("Tien phai tra la %ddong\n",(gr-gv)*45000);
	else
		printf("Tien phai tra la %ddong\n",(17-gv)*20000+(gr-17)*45000);
      break;
					}
				case 33:
					{
						int a,b,c;
	printf("So co ba chu so khac nhau doi mot la \n");
	for ( int i = 100; i < 1000; i++)
	{int j=10;
		b=i;
		a=b%j;	
		b=b/j;
		c=b%j;
		b=b/j;
		if(c!=a&&b!=a&&b!=c)
			printf("%d\t",i);
	}
		break;
					}
				case 34:
					{
						long N;
	printf("Nhap vao so nguyen lon N:");
	scanf("%ld",&N);
	int dau,max=0,tong=0,dem=0;
	while(N!=0)
	{
		dau=N%10;
			tong=tong+dau;
		N=N/10;
		if(max<dau)
		max=dau;
		dem++;	
	}
	printf("So dau tien cua N la %d\n",dau);
	printf("So lon nhat trong cac chu so cua N la %d",max);
	printf("\nTong cac chu so cua N la %d",tong);
	printf("\nSo chu so cua N la %d",dem);
					break;}
		default:printf("Nhap lai!\n");
		}
		}
		while (chon!=0);
		

		
		getch();
}
		



