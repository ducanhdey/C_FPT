#include<stdio.h>
int main()
{
		int N , t ;
		printf("Number of kwhs : ");
		scanf("%d", &N);
		if(N <= 100)
			{
				t = N * 950;
			}
		else if(N <= 150)
			{
				t = 100 * 950  + (N - 100) * 1250;
			}
		else if(N <= 200) 
			{
				t = 100 * 950  + 50 * 1250 + (N - 150) * 1350;
			}
		else
			{
				t = 100 * 950  + 50 * 1250 + 50 * 1350 +  (N - 200) * 1550;
			}
		printf("Prices : %d", t);
		return 0 ;
}
