#include <stdio.h>  
int main() {  
    int number, originalNumber, firstDigit, lastDigit, digitCount = 0,swappedNumber,i;  
  
    printf("Enter a positive integer: ");  
    scanf("%d", &number);  
  
    originalNumber = number;   
    while (number > 0) {  
        digitCount++;  
        number /= 10;  
    }  
  
   
    lastDigit = originalNumber % 10;  
    number = originalNumber / 10;  
  
    
    firstDigit = originalNumber / (10 * (digitCount - 1));  
    int power = 1;  
    for ( i = 0; i < digitCount - 2; i++) {  
        power *= 10;  
    }  
     swappedNumber = lastDigit * power * 10 + number % power * 10 + firstDigit;  
  
    printf("Swapped number: %d\n", swappedNumber);  
  
    return 0;  
}  
