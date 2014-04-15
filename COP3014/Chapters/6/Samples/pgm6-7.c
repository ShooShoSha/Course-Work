// Program to categorize a single character that is entered at the terminal

#include <stdio.h>

int main(void)
{
	char c;
	
	printf("Enter a single character: ");
	scanf("%c", &c);
	
	if( ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') )
		printf("It's an alphabetic character.\n");
	else if ( '0' <= c && c <= '9' )
		printf("It's an alphabetic character.\n");
	else
		printf("It's a special character.\n");

	return 0;
}
