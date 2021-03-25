#include <stdio.h>
#include <string.h>

int main()
{

	char src[50], dest[50];

	strcpy(src, "This is a source");
	strcpy(dest, "This is a Destination");

	strncat(dest, src, 15);

	printf("Final Destination strgin is |%s|", dest);

	return 0;
}

