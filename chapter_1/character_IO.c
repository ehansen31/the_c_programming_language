#include <stdio.h>

main()
{
	int c;
	long nc;

	c = getchar();
	while(c!=EOF){
		putchar(c);
		c = getchar();
		++nc;
		printf("%ld\n", nc);
	}



}
