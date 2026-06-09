
#include <stdio.h>

int main(void) {
	int n;
	long long sum = 0;
	if (printf("Enter a positive integer N: ") && fflush(stdout), scanf("%d", &n) == 1) {
		for (int i = 1; i <= n; ++i) sum += i;
		printf("Sum of first %d natural numbers = %lld\n", n, sum);
	}
	return 0;
}
