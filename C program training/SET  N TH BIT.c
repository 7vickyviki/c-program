#include <stdio.h>

int main() {
    int num, n;
    printf("Enter any num=");
    scanf("%d", &num);
    printf("n  bit to set=");
    scanf("%d", &n);
    num |= (1 << n);
    printf("after set %d=%d\n", n, num);
    return 0;
}
