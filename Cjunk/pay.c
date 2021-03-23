#include <stdio.h>

int main()
{
	int hours;
	int over_time;
	float net_pay;
	float money_left1;
	float money_left2;
	float Total_tax;
	float extra_pay = 0.00;
	float tax1;
	float tax2;
	float tax3;
	float GrossPay;
	printf("\nEnter the Numbers of Hours you work weekly: ");
	scanf("%i", &hours);
	
	if (hours > 40)
	{
		over_time = (hours - 40);
		extra_pay = (over_time * 6.00); 
		//Calculating the Gross Pay
		GrossPay = (40 * 12.00 + extra_pay); 
		printf("\nYour Gross Pay including overtime is %.2f", GrossPay);
	}
	
	else
	{
		GrossPay = (hours * 12.00);
	
	}

	//Calculating the Taxes

	if (GrossPay > 300)
	{
		tax1 = (0.15 * 300);
		money_left1 = (GrossPay - 300);
		
	}
	
	else
	{
		printf("You Have No taxes to Pay\n");
		printf("Your Net Earnings are %.2f$ per-week\n", GrossPay);
	}
		if (money_left1 > 150)
		{
			tax2 = (0.20 * 150);
			money_left2 = (money_left1 - 150);
			tax3 = (0.25 * money_left2);
			Total_tax = (tax1 + tax2 + tax3);
			net_pay = (GrossPay - Total_tax);
			printf("\nYou Need to Pay a Tax Amount of %.2f", Total_tax);
			printf("\nYour Net Earnings Equal To %.2f$ per-week\n", net_pay);
		}
		
		else
		{
			tax2 = (0.25 * money_left1);
			Total_tax = (tax1 + tax2);
			printf("\nYou Need to Pay a Tax Amount of %.2f\n", Total_tax);
			net_pay = (GrossPay - Total_tax);
			printf("\nYour Net Earnings Equal To %.2f$ per-week\n", net_pay);
		}
}
