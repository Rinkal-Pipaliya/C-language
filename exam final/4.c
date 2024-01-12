#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) 
	{
        return n;
    } 
	else 
	{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


void printFibonacciSeries(int n) {
    printf("Fibonacci Series up to %d numbers:\n", n);
    int i;
    for ( i = 0; i < n; i++) 
	{
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &N);

    if (N < 0) 
	{
        printf("Please enter a non-negative number.\n");
        return 1; 
    }

    printFibonacciSeries(N);

    return 0;
}

