#include<conio.h>
#include<stdio.h>
#include<string>
void xoa(char *s,int k)
{
	int n=strlen(s);
	for(int i=k;i<n-1;i++)
		s[i]=s[i+1];
	s[n-1]=NULL;
}
void xoaTrang(char *s)
{
	int n=strlen(s);
	for(int i=0;i<n;i++)
		if(s[i]==' '&&s[i+1]==' ')
		{xoa(s,i);i--;n--;}
		if(s[0]==' ')
		{xoa(s,0);n--;}
		if(s[strlen(s)-1]==' ')
		{xoa(s,strlen(s)-1);n--;}
			puts(s);
}
void main()
{
	char s[200];
	printf("Moi ban nhap chuoi:");
	fflush(stdin);
	gets(s);
	printf("Chuoi ban vua nhap la:");
	puts(s);
	xoaTrang(s);
	getch();
}