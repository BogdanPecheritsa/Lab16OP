#include <stdio.h>
#include <windows.h>

int reverseDigits(int num) {
    int reversed = 0;

    while (num > 0) {
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }

    return reversed;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    printf("Введіть ціле число: ");
    scanf_s("%d", &number);

    int reversedNumber = reverseDigits(number);

    printf("Число з оберненим порядком цифр: %d\n", reversedNumber);

    return 0;
}