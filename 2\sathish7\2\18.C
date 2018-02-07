#include<stdio.h>
#include<conio.h>
int main()
{
int n,c=0;
clrscr();
scanf("%d",&n);
while(n!=0)
{   
n/=10;
c=c+1;
}
printf("%d",c);
getch();
return 0;
}
