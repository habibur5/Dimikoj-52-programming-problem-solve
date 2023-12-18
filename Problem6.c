
#include <stdio.h>

int main() {
    // Input any integer
    int T, N, number, j;
    scanf("%d", &T);

    for(j = 1; j<=T; j++) {
    
        scanf("%d", &N);
        
        // Find the first and last digits
        int last_digit = N % 10;

        // Loop to find the first digit (considering negative numbers)
        while (N / 10 != 0) {
            N /= 10;
        }
        int first_digit = N;

        // Calculate and display the sum of the first and last digits
        int sum_of_digits = first_digit + last_digit;
        printf("Sum = %d\n", sum_of_digits);
    }

    return 0;
}
