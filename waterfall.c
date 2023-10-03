// % -o a.exe -std=c18 -Wall -Wextra -pedantic -Wformat=2

#include <stdio.h>

int main(void) {
    int i, sum;
    sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2) continue;
        printf("i is now: %d\n", i);
        sum += i;
    }
    printf("%d\n", sum);
    printf("The program should produce: %d", 1 + 3 + 5 + 7 + 9);
    return 0;
}

