#include <stdio.h>

main()
{
#define	LOWER	0
#define UPPER	300
#define STEP    20

	float fahr, celsius;

	fahr = LOWER;
	while (fahr <= UPPER)
	{
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3f\t%6f\n", fahr, celsius);
		fahr = fahr + STEP;
	}

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr+20)
	{
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3f\t%6f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
}
