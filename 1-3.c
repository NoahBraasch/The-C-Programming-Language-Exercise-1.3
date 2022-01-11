#include <stdio.h>

// Print F -> C conversion table
int main(){

	int fahr, celcius;
	int lower, upper, step;

	// Numerical values to use in the table
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	// Printing sequence

	printf("Farenheit:	Celcius:\n");
	while(fahr <= upper){
		celcius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celcius);
		fahr = fahr + step;
	}
	return 0;
}