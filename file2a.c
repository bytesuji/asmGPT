#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long p(int n, int k) {
    return ((long long)(n-2) * k * (k-1)) / 2 + k;
}

int main() {
    srand(time(NULL));
    int n = rand() % 500 + 1;
    for (int k = 1; k <= 256; k++) {
        long long q = p(n, k);
        printf("%lld ", q);
    }
    return 0;
}
