#include <stdio.h>

int main()
{
	float value1, value2;
	char operator;
	printf("\nType in your Expression:\n");
	scanf("%f %c %f", &value1, &operator, &value2);

	//Now Lets use the switch statement!

	switch (operator)
	{
		case '+':
			printf("\nYou Choose Addition!\n");
			printf("%.2f\n", value1+value2);
			break;
		case '-':
			printf("\nYou Choose Substraction\n");
			printf("%.2f\n", value1-value2);
			break;
		case '*':
			printf("\nYou Choose multiplication\n");
			printf("%.2f\n", value1*value2);
			break;
	}
}

