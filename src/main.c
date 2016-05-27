#include <stdio.h>
#include <functional.h>

int main() {
	float a, b, c, x1, x2, d;
	int CountRoots;
	printf("Введите a: "); 
	scanf("%f", &a);
	printf ("Введите b: "); 
	scanf("%f", &b);
	printf("Введите c: "); 
	scanf("%f", &c);
   	process(a, b, c, &x1, &x2, &d, &CountRoots);
	return 0;
}
