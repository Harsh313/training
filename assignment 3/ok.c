#include <stdio.h>

int main() {
    int num, digit, rev = 0;

    printf("Enter a four digit number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    // Print each digit of the reversed number
    

    return 0;
}
