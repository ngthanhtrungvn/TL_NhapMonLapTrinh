#include<conio.h>
#include<stdio.h>
#include<string>
void tach(char *s)
{
	char *t=strtok(s," ");
	char b[31][45];
	int i=0;
	while(t!=NULL)
	{
		strcpy(b[i],t);
		i++;
		t=strtok(NULL," ");
	}
	printf("Ten:%s",b[i-1]);
}
void main()
{
	char s[31];
	printf("Moi ban nhap ho ten:");
	fflush(stdin);
	gets(s);
	printf("Chuoi ban vua nhap la:");
	puts(s);
	tach(s);
	getch();
}