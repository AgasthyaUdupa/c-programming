#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f=1;
	printf("enter the number: ");
	scanf("%d",&n);
	fact:
	if(n>0)
	{
		f=f*n;
		n--;
		goto fact;
	}
	printf("%d",f);
	getch();
}