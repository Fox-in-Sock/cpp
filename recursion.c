#include <stdio.h>

void TOH(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    TOH(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    TOH(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    TOH(n, 'A', 'C', 'B');
    return 0;
}
-------------------------------------------------------
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d\n", n, factorial(n));
    return 0;
}
--------------------------------------------------------
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the term number for Fibonacci sequence: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is: %d\n", n, fibonacci(n));
    return 0;
}
--------------------------------------------------------------
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    return 0;
}
