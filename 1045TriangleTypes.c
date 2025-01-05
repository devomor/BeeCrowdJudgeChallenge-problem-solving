#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, temp;

    // Reading input
    scanf("%lf %lf %lf", &A, &B, &C);

    // Arrange A, B, C in descending order
    if (A < B) { temp = A; A = B; B = temp; }
    if (A < C) { temp = A; A = C; C = temp; }
    if (B < C) { temp = B; B = C; C = temp; }

    // Check if it forms a triangle
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        // Check triangle type based on angles
        double A2 = A * A, B2 = B * B, C2 = C * C;
        if (A2 == B2 + C2) {
            printf("TRIANGULO RETANGULO\n");
        } else if (A2 > B2 + C2) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (A2 < B2 + C2) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        // Check if it is equilateral or isosceles
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || B == C || A == C) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
