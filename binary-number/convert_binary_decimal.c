#include <stdio.h>
#include <stdlib.h>

void decimal_to_binary(int num) {

    int binary[32];
    int i = 0;

    if (num == 0) {
        // If the decimal number is 0, the binary representation is 0.
        printf("0\n");
        exit(EXIT_SUCCESS);
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        // Print the binary digits in reverse order to get the correct representation.
        printf("%d", binary[j]);
    }

    printf("\n");
}

int main(void) {
    int decimal_number = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);

    printf("Binary representation: ");
    decimal_to_binary(decimal_number);

    return EXIT_SUCCESS;
}