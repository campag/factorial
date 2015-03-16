#include <stdio.h>
#include <math.h>
#define BIGNUMBER 10000000

int main(void) {
	double logsum=0, intpart, fracpart;
	int i;
	for (i=1;i<BIGNUMBER+1; i++) {
		logsum += log10((double) i);
	}
	fracpart=modf(logsum, &intpart);
	printf("Total digits: %0.0f\n", 1+intpart);
	printf("Value: %0.20fe%0.0f\n", pow(10.0,fracpart), intpart);
	return NULL;
}
