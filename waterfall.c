/* gcc waterfall.c -o a.exe @flags.txt
   clang waterfall.c -o a.exe @flags.txt */

#include <stdio.h>

void square(void) {
    int n, i;
    
    printf("This program prints a table of squares.\n");

    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }
}

void sum(void) {
    printf("This program sums a series of integers.\n");
    int sum = 0;

    printf("Enter integers (0 to terminate): ");
    int n = 1; /* Non-Zero Value*/
    while (n) {
        scanf("%d", &n);
        sum += n;
    }

    printf("The sum is: %d\n", sum);
}

void numdigits(void) {
    printf("This program prints the number of digits in an integer.");

    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int d = 0;
    do {
        n /= 10;
        d++;
    } while (n > 0);

    printf("The number has %d digit(s).\n", d);
}

int main_checking(void) {
    /* Balances a checkbook */
    int cmd;
    float debit, credit, balance = 0.0f;

    printf("*** ACME checkbook-blanacing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
    for (;;) {
        printf("Enter a command: ");
        scanf("%d", &cmd);

        switch (cmd) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Commands: 0=clear, 1=credit, 2=debit, ");
                printf("3=balance, 4=exit\n\n");
                break;
        }
    }
}














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


// 1, 3, 5, 7, 9
