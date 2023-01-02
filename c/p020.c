#include <stdio.h>

int compute(const int factorial) {
    int n, carry, sum;
    int a[200];
    a[0] = 1;
    n = 1;
    for (int i = 2; i <= factorial; i++) {
        carry = 0;
        for (int j = 0; j < n; j++) {
            int k = a[j] * i + carry;
            a[j] = k % 10;
            carry = k / 10;
        }
        while (carry > 0) {
            a[n] = carry % 10;
            carry = carry / 10;
            n++;
        }
    }
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    printf("%d", compute(100));
    return 0;
}
