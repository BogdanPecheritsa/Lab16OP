#include <stdio.h>
#include <windows.h>

double calculateArraySum(int array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int findMaxValue(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int findMinValue(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

double calculateArrayProduct(int array[], int size) {
    double product = 1;
    for (int i = 0; i < size; i++) {
        product *= array[i];
    }
    return product;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;

    printf("Введіть розмір масиву: ");
    scanf_s("%d", &size);

    int array[100];

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < size; i++) {
        printf("Елемент %d: ", i + 1);
        scanf_s("%d", &array[i]);
    }

    double sum = calculateArraySum(array, size);
    printf("Сума елементів масиву: %.2f\n", sum);

    int maxValue = findMaxValue(array, size);
    printf("Максимальне значення елемента масиву: %d\n", maxValue);

    int minValue = findMinValue(array, size);
    printf("Мінімальне значення елемента масиву: %d\n", minValue);

    double product = calculateArrayProduct(array, size);
    printf("Добуток елементів масиву: %.2f\n", product);

    return 0;
}