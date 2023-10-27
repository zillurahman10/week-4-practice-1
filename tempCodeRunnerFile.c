#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int r = n;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        n--;
        printf("\n");
    }
    return 0;
}
