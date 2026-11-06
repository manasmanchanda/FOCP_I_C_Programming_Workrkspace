//Question 16 — Print a Diamond Pattern
#include <stdio.h>

void printpattern(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
            printf("  ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
            printf("  ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }
}

int main(void)
{
    printpattern(3);
    return 0;
}
#include <stdio.h>
#include <string.h>

const char* kangaroo(int x1, int v1, int x2, int v2) {
    // If the first kangaroo is behind (x1 < x2), it must be faster (v1 > v2)
    // If the first kangaroo is ahead (x1 > x2), it must be slower (v1 < v2)
    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0) {
        return "YES";
    }
    return "NO";
}

int main() {
    int x1, v1, x2, v2;
    if (scanf("%d %d %d %d", &x1, &v1, &x2, &v2) == 4) {
        printf("%s\n", kangaroo(x1, v1, x2, v2));
    }
    return 0;
}