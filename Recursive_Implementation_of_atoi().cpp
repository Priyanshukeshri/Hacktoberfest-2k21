// Recursive C program to compute atoi()
#include <stdio.h>
#include <string.h>

// Recursive function to compute atoi()
int myAtoiRecursive(char *str, int n)
{
	// Base case (Only one digit)
	if (n == 1)
		return *str - '0';

	// If more than 1 digits, recur for (n-1), multiplu result with 10
	// and add last digit
	return (10 * myAtoiRecursive(str, n - 1) + str[n-1] - '0');
}

// Driver Program
int main(void)
{
	char str[] = "112";
	int n = strlen(str);
	printf("%d", myAtoiRecursive(str, n));
	return 0;
}
