#include <stdio.h>
#include <conio.h>

int main() {
    int i, num;
    char dec;

    do {
        printf("\nEnter a number for the table: ");
        scanf("%d", &num);

        for (i = 1; i <= 10; ++i) {
            printf("%d * %d = %d\n", num, i, num * i);
        }

        printf("\nDo you want to exit? (Y/N): ");
        scanf(" %c", &dec); 

    } while (dec == 'Y' || dec == 'y');

    getch();
    return 0;
}
