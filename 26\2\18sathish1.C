#include<stdio.h>
#include<conio.h>
int main()
{
int n,rem,t,sum=0;
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
printf("%d",sum);
getch();
return 0;
}
