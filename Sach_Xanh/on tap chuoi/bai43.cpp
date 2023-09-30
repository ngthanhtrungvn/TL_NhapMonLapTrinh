#include<conio.h>
#include<stdio.h>
#include<string>
int tim(char *s,char *s1)
{
	if(strstr(s,s1)==NULL)
		return 0;
	return 1;
}
void main()
{
	char s[30];
	printf("Moi ban nhap chuoi:");
	fflush(stdin);
	gets(s);
	printf("Chuoi ban vua nhap la:");
	puts(s);
	char s1[30];
	printf("Moi ban nhap chuoi1:");
	fflush(stdin);
	gets(s1);
	printf("Chuoi 1 ban vua nhap la:");
	puts(s1);
	if(tim(s,s1)==1)
		printf("%s co trong %s",s1,s);
	else
		printf("%s khong co trong %s",s1,s);
	getch();
}