#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[100],n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d %d\n",a[i],i);
}
getch();
return 0;
}
