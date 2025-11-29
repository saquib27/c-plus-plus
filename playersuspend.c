#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, y, r;
        scanf("%d %d %d", &n, &y, &r);

        int from_red = r;
        int from_yellow = y / 2;

        int max_suspended = from_red + from_yellow;
        if (max_suspended > n)
            max_suspended = n;

        printf("%d\n", max_suspended);
    }

    return 0;
}
