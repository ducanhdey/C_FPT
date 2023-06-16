#include<stdio.h>
int main()
{
	int N , t ;
	scanf("%d", &N);
	if(N <= 3)
	{
		t = N * 120000;
	}
	else if(N <= 6){
		t = 3 * 120000 + (N - 3) * 90000;
	}
	else if(N <= 10) 
	{
		t = 3 * 120000 + 3 * 90000 + (N - 6) * 85000 ;
	}
	else
	{
		t = 3 * 12000 + 3 * 90000 + 4 * 85000 + (N - 10) * 70000;
	}
	printf("%d", t);
	return 0 ;
}
