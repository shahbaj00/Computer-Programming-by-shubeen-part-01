#include <stdio.h>

int main()
{
    int m, n = 5;
    int i;

    m = 0;

    for(i = 1; i <= 10; i++) {

        m = m + n; // We can solve by addition
        printf("%d X %d = %d\n", n, i, m);
    }

    return 0;
}