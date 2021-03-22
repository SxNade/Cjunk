#include <stdio.h>

int main()
{
	enum Weekday {Sunday, Monday, Tuesday};
	printf("\n Today is 'Sunday' \n ");
	enum Weekday today = Tuesday;
	switch(today)
	{
		case Sunday:
			printf("\nEnjoy the Holiday Bruh!\n");
			break;
		case Monday:
			printf("\nBack Again on Monday with Full-Power\n");
			break;
		default:
			printf("Whats Up Bruh No Days Given By!");
			break;
	}
}

