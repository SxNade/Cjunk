/*
	Author:: Jugnu
	Purpose:: Calculate the area and perimeter of a Rectangle
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("\n[*]usage ./rect\n");
	double height = 15.3;
	double width = 32.3;

	double perimeter = 2.0 * (height + width);
	double area = width * height;

	printf("\nThe Rectangle with height %f and width %f has Perimeter = %f and area = %f\n\n",height, width, perimeter, area);
	
	//When we print everything with %f or Float as Format specifier....we will get wrong results if we use %e// 
	
	return 0;
}

