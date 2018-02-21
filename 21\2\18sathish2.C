#include<stdio.h>
#include<conio.h> 
int main() 
{
int i,n, arr[100];
clrscr();
printf("enter the 1 to 100 value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the number:",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<=n;i++)
{
if(arr[0]<arr[i])
a[0]=a[i];
}
printf("largest element%d",a[0]);
getch();
return 0;
}
