#include <stdio.h>

void decimalToBinary(int num) {



    int binary[32];
    int i = 0;

    if (num == 0) {
        printf("0"); // If the decimal number is 0, the binary representation is 0.
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]); // Print the binary digits in reverse order to get the correct representation.
    }
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary representation: ");
    decimalToBinary(decimalNumber);

    return 0;
}