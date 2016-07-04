#include<stdio.h>
void main()
{
int i,j,k=1,l,m;
clrscr();
printf("enter the no to convert seed :");
scanf("%d",&i);
while(i>0)
{
j=i%10;
i=i/10;
k=k*j;
}
printf("re enter the number");
scanf("%d",&m);
l=k*m;
printf("seed is%d ",l);
getch();
}
