#include<stdio.h>
#include<conio.h>
int main( )
{
int no=2,temp,rem,sum,count=0,a,b;
clrscr();
scanf("%d%d",&a,&b);
for(no=a+1; no<b; no++)
{
temp=no;
sum=0;
while(temp>0)
{
rem=temp%10;
sum=sum+(rem*rem*rem);
temp=temp/10;
}
if(no==sum)
{
printf("\n%d", no);
count++;
}
}
getch();
return 0;
}   
