#include<stdio.h>
#include<conio.h>
int main()
{
int min,hr;
clrscr();
printf("enter the minute");
scanf("%d",&min);
hr=min/60;
min=min%60;
printf("%d%d",hr,min);
getch()
return 0;
}
