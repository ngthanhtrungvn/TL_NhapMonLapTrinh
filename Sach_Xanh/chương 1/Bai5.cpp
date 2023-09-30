#include <stdio.h>
#include <conio.h>
void main()
{
	int chon;
	printf("---------------MENU------------------");
	printf("\n1.In ra man hinh thong thuong");
	printf("\n2.In ra man hinh bang ham for");
	printf("Nhap so ban muon chon: ");
	scanf("%d",&chon);
	switch(chon)
	{
	case 1:
		{
			printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n10");
		break;
		}
	case 2:
		{
			int n=10;
			for(int i=1; i<=n; i++)
			printf("%d\n",i);
			break;
		}
	default:
		{
			printf("So %d ban nhap sai roi", chon);
			break;
		}
	}
	getch();
}




