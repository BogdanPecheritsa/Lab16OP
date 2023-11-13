#include <stdio.h>
#include <math.h>
#include <windows.h>

void calculateParallelogramArea(double a, double b, double alpha) {
    double alphaRadians = alpha * (3.14159265358979323846 / 180.0);
    double area = a * b * sin(alphaRadians);
    printf("����� �������������: %.2f\n", area);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double sideA, sideB, angleAlpha;

    printf("������ ������� ������� a: ");
    scanf_s("%lf", &sideA);

    printf("������ ������� ������� b: ");
    scanf_s("%lf", &sideB);

    printf("������ �������� ���� alpha � ��������: ");
    scanf_s("%lf", &angleAlpha);

    calculateParallelogramArea(sideA, sideB, angleAlpha);

    return 0;
}