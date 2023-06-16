#include<stdio.h>
int main()
{
	float weight , height , BMI ;
	do{
	
	printf("Your height is (kg) : ");
	scanf("%f" , &height);
	printf("Your weight is (m) : ");
	scanf("%f" , &weight);
	
 } while (height <= 0 || weight <= 0);
	BMI = weight / (height * height) ;
	printf("BMI =  %.2f\n" , BMI );
	if(BMI <= 18.4 )
		{
			printf("Underweight");
		}
	else if(BMI <= 24.9)
		{
			printf("Normal range");
		}
	else if(BMI <= 39.9)
		{
			printf("Overweight");
		}
	else
		{
			printf("Obese");
		}
	return 0 ;
 }  
