#include <stdio.h>

int main()
{
	int hours;
	int over_time;
	float extra_pay = 0.00;
	float GrossPay;
	printf("\nEnter the Numbers of Hours you work weekly: ");
	scanf("%i", &hours);
	
	if (hours > 40);
		over_time = (hours - 40);
		extra_pay = (over_time * 6.00); 
	//Calculating the Gross Pay
	GrossPay = (40 * 12.00 + extra_pay); 
	printf("\nYour Gross Pay including overtime is %.2f", GrossPay);
}

