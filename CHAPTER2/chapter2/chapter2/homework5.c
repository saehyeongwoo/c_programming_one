#include <stdio.h>

int main() {
	int a = 123456;
	float b = 123.456;
	double c = 123.456;
	long double d = 123.456;

	printf("int a: %d\n", a);
	printf("float b: %.10f\n", b);
	printf("double c: %.10f\n", c);
	printf("long double d: %.10lf\n", d);

	return 0;
}