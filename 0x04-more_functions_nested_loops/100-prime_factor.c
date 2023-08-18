#include <stdio.h>

long long find_largest_prime_factor(long long n)
{
	long long factor = 2;
	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else 
		{
			factor++;
		}
	}
}

int main(void) 
{
	long long number = 612852475143;
	long long largest_prime_factor = find_largest_prime_factor(number);

	printf("%lld\n", largest_prime_factor);
	return 0;
}
