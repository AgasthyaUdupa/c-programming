#include<stdio.h>
#include<conio.h>
int main()
{
	long int n,r,sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=sum;
	while(n>0)
	{
		r=n%10;
		switch(r)
		{
			case 1:
				printf("one");
				break;
			case 2:
				printf("two");
				break;
			case 3:
				printf("thrid");
				break;
			case 4:
				printf("four");
				break;
			case 5:
				printf("five");
				break;
			case 6:
				printf("six");
				break;
			case 7:
				printf("seven");
				break;
			case 8:
				printf("eight");
				break;
			case 9:
				printf("nine");
				break;
			default:
				printf("invalid");
				break;
		}
		n=n/10;
	}
	getch();
	return 0;
}