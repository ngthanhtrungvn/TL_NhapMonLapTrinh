#include<conio.h>
#include<stdio.h>
#include<string>
int demTu(char *s)
{
	int n=strlen(s);
	int dem=0;
	if(s[0]!=' ')
		dem++;
	for(int i=0;i<n-1;i++)
		if(s[i]==' '&&s[i+1]!=' ')
			dem++;
	return dem;
}
void main()
{
	char s[30];
	printf("Moi ban nhap chuoi:");
	fflush(stdin);
	gets(s);
	printf("Chuoi ban vua nhap la:");
	puts(s);
	printf("Co %d tu trong chuoi",demTu(s));
	getch();
}