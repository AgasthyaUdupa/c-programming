#include<stdio.h>
void main()
{
	int r,c,sp;
	r=1;
	while(r<=5)
	{
		sp=4;
		while(sp>=r)
		{
			printf(" ");
			sp--;
		}
		c=1;
		while(c<=r)
		{
			printf("%d",c);
			c++;
		}
		c=c-2;
		while(c>=1)
		{
			printf("%d",c);
			c--;
		}
		printf("\n");
		r++;
	}
}