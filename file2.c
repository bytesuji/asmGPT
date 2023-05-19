#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long polygonal_number(int n, int k) {
    return ((long long)(n-2) * k * (k-1)) / 2 + k;
}

int main() {
    srand(time(NULL));

    int n = rand() % 500 + 1;

    for (int k = 1; k <= 256; k++) {
        long long n_gonal_number = polygonal_number(n, k);
        printf("%lld ", n_gonal_number);
    }

    return 0;
}
