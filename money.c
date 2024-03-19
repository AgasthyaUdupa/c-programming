#include <stdio.h>
#include <conio.h>
int main()
{
    int amt = 3200;
    int i = 0, j = 0;
    int money[] = {2000,500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n = 9;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j =i+1;j < n; j++)
        {
            if (money[j]>money[i])
            {
                int temp=money[i];
                money[i]=money[j];
                money[j]=temp;
            }  
        }
    }
    i=0;
    while (i<n)
    {
        while (amt-money[i]>=0)
        {
            count++;
            printf("%d\n",money[i]);
            amt-=money[i];
        }
        i++;
        if (amt==0)
        {
            break;
        }
    }
    printf("\n total number of money: %d\n",count);
    
}