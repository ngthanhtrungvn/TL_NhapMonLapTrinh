#include<conio.h>
#include<stdio.h>
#include<string>
void xuat(char *s1,char *s2)
{
	char *s3;
	s3=s2;
	while((s3=strstr(s3,s1))!=NULL)
	{
		int a=s3-s2;
		printf("%s nam trong %s o vi tri %d\n",s1,s2,a);
		s3++;
	}
}
void main()
{
  char s1[100], s2[100];
    printf("\nNhap S1:"); 
	fflush(stdin);
	gets(s1);
    printf("Nhap S2:"); 
	fflush(stdin);
	gets(s2);
	xuat(s1,s2);
	getch();
}