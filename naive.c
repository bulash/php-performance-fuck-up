#include <stdio.h>
#include <stdbool.h>

bool is_prime();

int main()
{
    int count = 0, i = 1, N = 25000;

    while (count <= N) {
        if (is_prime(i)) {
            //printf("%d is prime\n", i);
            count++;
        }

        if (count == N) {
            printf("%d\n", i);
            break;
        }

        i++;
    }
}

inline bool is_prime(n)
{
    int i;

    for (i = 2; i < n; i++) {
        if (n%i == 0) {
            return false;
        }
    }

    return true;
}
