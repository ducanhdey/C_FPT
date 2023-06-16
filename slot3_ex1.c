#include<stdio.h>
int main()
{
		int mark ;
		int reward ;
		int noofShirts ;
		printf("Your Mark : ");
		scanf("%d", &mark);
		if(mark > 7)
		    {
				reward = 500000;
			noofShirts = 2;
			}
		else
			{
			reward = 0 ;
			noofShirts = 0 ;
			}
		printf("Reward  : %d, shirts  : %d", reward , noofShirts);
		return 0 ;
}
