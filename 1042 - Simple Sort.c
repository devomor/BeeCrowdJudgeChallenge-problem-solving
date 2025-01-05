#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C, temp,a,b,c;

    // Reading input
    scanf("%d %d %d", &A, &B, &C);

    //read sequence value set
    a = A;
    b =B;
    c = C;

    // Sorting in ascending order
    if (A > B) { temp = A; A = B; B = temp;}
    if (A > C) { temp = A; A = C; C = temp; }
    if (B > C) { temp = B; B = C; C = temp; }

    // Output the sorted numbers
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}
