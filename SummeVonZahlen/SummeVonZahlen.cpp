#include <stdio.h> 

int main() {

    int a;
    int b;
    int result = 0;

    printf("Startwert: ");
    scanf_s("%d", &a);

    printf("Endwert: ");
    scanf_s("%d", &b);

    if (a < b) {
        for (int i = a; i <= b; i++) {
            printf("%d ", i);

            result += i;
            if (i == b) {
                printf("= %d", result);
            }
            else {
                printf("+ ");
            }
        }

        printf("\nDie Summe lautet: %d", result);

    }
    else {
        printf("Der Endwert sollte groesser als der Starwert sein!");
    }

    return 0;
}