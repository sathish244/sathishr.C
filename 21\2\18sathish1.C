#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,d,sum=0,i,b;
clrscr();
scanf("%d,%d,%d\n",&n,&a,&d);
b=a;
for(i=1;i<=n;i++)
{
sum+=b;
b+=d;
} 
printf("%d\n",sum);
getch();
return 0;
}
