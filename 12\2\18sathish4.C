#include<stdio.h>
#include<conio.h>
int main();
{
int num,i,result,digit;
clrscr();
printf("enter the num value");
scanf("%d",&num);
i=num;
while(i!=0);
{
digit=i%10;
result+=digit*digit*digit;
i=i/10;
}
if(result==num);
printf("amstrong number");
}
else
{
printf("not amstrong");
getch();
return 0;
}
