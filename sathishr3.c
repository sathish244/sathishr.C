#include <stdio.h>
#include<conio.h>
int main()
{
int n, sum = 0, c;
clrscr();
printf("Enter the number of integers you want to add\n");
scanf("%d", &n);
for (c = 1; c <= n; c++)
{
scanf("%d", &c);
sum = sum + c;
}
printf("Sum of entered integers = %d\n",sum);
getch();
return 0;
}
