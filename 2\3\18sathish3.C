#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
clrscr();
int l,count=0,i,c;
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==' ')
count++;
}
c=l-count;
printf("%d",c);
getch();
return 0;
}
