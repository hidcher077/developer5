#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
void squaring(int *a, int n);

int main() {
    int n, data[NMAX];
    if (input(data, &n)) {
        squaring(data, n);
        output(data, n);
    } else {
        printf("n/a\n");
    }

    return 0;
}

int input(int *a, int *n) {
    if (scanf("%d", n) != 1 || *n > NMAX) {
        return 0;
    }

    for (int i = 0; i < *n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            return 0;
        }
    }
    return 1;
}

void output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void squaring(int *a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = a[i] * a[i];
    }
}
