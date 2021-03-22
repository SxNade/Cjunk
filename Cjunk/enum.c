#include <stdio.h>

int main()
{
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICORSOFT};

	enum Company pages = XEROX;
	enum Company android = GOOGLE;
	enum Company shopping = EBAY;

	printf("\npages at: %i\n", pages);
	printf("\nandroid at: %i\n", android);
	printf("\nshopping at: %i\n", shopping);
}


